// 必须手动先启动vrep中的仿真场景，因为使用的端口是19999，如果不手动启动仿真，本程序无法连接vrep
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// include for controller
#include <stddef.h>
//#include "controller_abb4600.h"        /* Model's header file */
#include "rtwtypes.h"
#include <windows.h>

//将要包含的C头文件放置extern "C"中
//作用是让 C++ 编译器将 extern "C" 声明的代码当作 C 语言代码处理
//可以避免 C++ 因符号修饰导致代码不能和C语言库中的符号进行链接的问题
// 如果 #include "controller_abb4600.h" 不放置在此处，会出现 undefine reference to xx的编译错误
extern "C" {
    #include "extApi.h"
    #include "controller_abb4600.h"        /* Model's header file */
    void rt_OneStep(void);
    void rt_OneStep_test(real32_T qd[6], real32_T dqd[6], real32_T ddqd[6],real32_T q[6], real32_T dq[6], real32_T u[6]);
}


int main_test1(int argc,char* argv[])
{
    int clientID=simxStart((simxChar*)"127.0.0.1",19999,true,true,2000,5);
    if (clientID!=-1)
    {
        printf("Connected to remote API server\n");
        //simxStartSimulation(clientID, simx_opmode_oneshot);
        // Now try to retrieve data in a blocking fashion (i.e. a service call):
        int objectCount;
        int* objectHandles;
        int ret=simxGetObjects(clientID,sim_handle_all,&objectCount,&objectHandles,simx_opmode_blocking);
        if (ret==simx_return_ok)
            printf("Number of objects in the scene: %d\n",objectCount);
        else
            printf("Remote API function call returned with error code: %d\n",ret);

        extApi_sleepMs(2000);

        // Now retrieve streaming data (i.e. in a non-blocking fashion):
        int startTime=extApi_getTimeInMs();
        int mouseX;
        simxGetIntegerParameter(clientID,sim_intparam_mouse_x,&mouseX,simx_opmode_streaming); // Initialize streaming
        while (extApi_getTimeDiffInMs(startTime) < 5000)
        {
            ret=simxGetIntegerParameter(clientID,sim_intparam_mouse_x,&mouseX,simx_opmode_buffer); // Try to retrieve the streamed data
            if (ret==simx_return_ok) // After initialization of streaming, it will take a few ms before the first value arrives, so check the return code
                printf("Mouse position x: %d\n",mouseX); // Mouse position x is actualized when the cursor is over V-REP's window
        }

        // Now send some data to V-REP in a non-blocking fashion:
        simxAddStatusbarMessage(clientID,"Hello V-REP!",simx_opmode_oneshot);

        simxStopSimulation(clientID, simx_opmode_oneshot);
        // Before closing the connection to V-REP, make sure that the last command sent out had time to arrive. You can guarantee this with (for example):
        int pingTime;
        simxGetPingTime(clientID,&pingTime);  //这是一个阻塞函数，当它执行完成时说明上一个函数一定执行完成了，从而确保上一条指令已经执行

        // Now close the connection to V-REP:
        simxFinish(clientID);
    }
    return(0);
}


int main(int argc,char* argv[])
{
    printf("Simulation with controller.\n");
    //初始化控制器
    controller_abb4600_initialize();

    //连接V-rep
    int clientID=simxStart((simxChar*)"127.0.0.1",19999,true,true,2000,5);
    int jointHandle[6]={0}; //joint handle
    float jointPosition[6] = {0};
    float jointVel[6] = {0};
    int i = 0; // temp counter

    // 目标关节位置、速度和加速度
    float qd[6] = {1.5F, -0.6F, 1.0F, 0.5F, 0.5F, 1.0};
    float dqd[6] = { 0.5F, -0.5F, 0.2F, 0.1F, 0.1F, 0.1F };
    float ddqd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };
    float tau[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };
    float setVel = 9999;
    float torqueLimit[6] = {20000.0F, 20000.0F, 20000.0F, 5000.0F, 5000.0F, 5000.0F};  // 前三轴的力矩限幅适当给大一些， 太小无法控制机械臂
//    float torqueDeadZone[6] = {20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F};
    float littleNum[6] = {0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F};

    int jointNum = 6;
//    char jointName[] = "IRB4600_joint";
    char string[2] = {0};

    if (clientID!=-1)
    {
        printf("Connected to remote API server\n");
        simxSynchronous(clientID, true);  //开启同步模式

        simxStartSimulation(clientID, simx_opmode_oneshot);

        //get joint handle
        for(i = 0; i < jointNum; i++)
        {
            int handle = 0;
            char jointName[] = "IRB4600_joint";
            itoa(i+1,string,10); //关节序号
            int ret = simxGetObjectHandle(clientID, strcat(strcat(jointName, string), "#"), &handle, simx_opmode_blocking);
            if (ret == simx_return_ok)
                jointHandle[i] = handle;
            else
                printf("Connot get joint handle\n");
        }
        // 打印出jointHandle
        for(i = 0; i < jointNum; i++)
        {
            printf("%d   ", jointHandle[i]);
        }


        simxSynchronousTrigger(clientID);
//        extApi_sleepMs(2000);

        //获取关节位置
        for(i = 0; i < jointNum; i++)
        {
//            extApi_sleepMs(10);
            float jp = 0;
            simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_streaming); //first call
//            extApi_sleepMs(10);
            int ret = simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_buffer); //following calls
//            if(ret == simx_return_ok)
//                jointPosition[i] = jp;
//            else
//                printf("Connot get joint position\n");
            while(simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_buffer) != simx_return_ok) {}
            jointPosition[i] = jp;  //返回值单位为rad
        }

        // 打印出jointPosition
        for(i = 0; i < jointNum; i++)
        {
            printf("%f   ", jointPosition[i]);
        }



        // 打印出jointPosition
        for(i = 0; i < jointNum; i++)
        {
            printf("%f   ", jointPosition[i]);
        }


        //进行关节力矩控制

//        for(i = 0; i < jointNum-1; i++)
//        {
//            simxSetJointTargetVelocity(clientID, jointHandle[i], setVel, simx_opmode_oneshot);
//            simxSetJointForce(clientID, jointHandle[i], 100, simx_opmode_oneshot);

//        }
        int startTime=extApi_getTimeInMs();
        int lastCmdTime, currentTime;
        currentTime = simxGetLastCmdTime(clientID);
        lastCmdTime = currentTime;
        simxSynchronousTrigger(clientID);
        //while (extApi_getTimeDiffInMs(startTime) < 10000)
        while (simxGetConnectionId(clientID) != -1)
        {
            // 1.更新时间
            currentTime = simxGetLastCmdTime(clientID);
            float dt = (currentTime - lastCmdTime) / 1000.0;

            // 2.获取关节位置和计算关节速度
            for(i = 0; i < jointNum; i++)
            {
                float jp = 0;
                simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_streaming); //first call
                int ret = simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_buffer); //following calls

                while(simxGetJointPosition(clientID, jointHandle[i], &jp, simx_opmode_buffer) != simx_return_ok) {}

                // 关节速度
                jointVel[i] = (jp - jointPosition[i]) / dt ;
                // 关节位置
                jointPosition[i] = jp;
            }
            printf("joint1 positon:%f, joint1 vel:%f \n", jointPosition[0], jointVel[0]);

            // 3.控制算法部分--使用计算力矩控制器（从MATLAB SIMULINK直接生成C代码）
            // 输入：关节期望位置、速度、加速度和关节当前位置、速度，单位为rad
            // 输出：期望关节力矩
            // 3.1 计算目标力矩
//            rt_OneStep();
            rt_OneStep_test(qd, dqd, ddqd, jointPosition, jointVel, tau);


            //3.2 设置关节力矩
            for(i = 0; i < jointNum; i++)
            {
                float setTau = 0;
                if(tau[i] < -littleNum[i])  //反向转动
                {
                    setVel = -9999;
                    if(tau[i] < -torqueLimit[i])
                        setTau = -torqueLimit[i];
                    else
                        setTau = -tau[i];
                }
                else if(tau[i] > littleNum[i])  // 由于tau的值可能存在NaN情况，所以此处必须加以判断
                {
                    setVel = 9999;
                    if(tau[i] > torqueLimit[i])
                        setTau = torqueLimit[i];
                    else
                        setTau = tau[i];
                }
                else  // 如果tau是NaN无效数字，就设置目标速度为0
                {
//                    if(!isnan(tau[i]))
//                        {
//                        setVel = 0;
//                        setTau = tau[i];
//                    }
                    setVel = 0;
                }

                // 3.3 设置仿真环境中的关节力矩
                simxSetJointTargetVelocity(clientID, jointHandle[i], setVel, simx_opmode_oneshot);
                simxSetJointForce(clientID, jointHandle[i], setTau, simx_opmode_oneshot);

            }

            //4. 更新参数
            lastCmdTime = currentTime;



            simxSynchronousTrigger(clientID);
            extApi_sleepMs(5);
        }

//        extApi_sleepMs(9000);

        // Now send some data to V-REP in a non-blocking fashion:
        simxAddStatusbarMessage(clientID,"Hello V-REP!",simx_opmode_oneshot);

        simxStopSimulation(clientID, simx_opmode_oneshot);
        // Before closing the connection to V-REP, make sure that the last command sent out had time to arrive. You can guarantee this with (for example):
        int pingTime;
        simxGetPingTime(clientID,&pingTime);  //这是一个阻塞函数，当它执行完成时说明上一个函数一定执行完成了，从而确保上一条指令已经执行

        // Now close the connection to V-REP:
        simxFinish(clientID);
    }

    //关闭控制器
    controller_abb4600_terminate();
    return(0);
}
