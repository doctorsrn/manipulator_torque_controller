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

// 仿真环境中50ms周期采样得到的关节路径
float pathSampled[68][6] = { {-0.087266460061073,1.0995573997498,0.47123888134956,2.0944013595581,-0.017453348264098,-2.181667804718,},
                              {-0.085218295454979,1.0960668325424,0.46774798631668,2.0909106731415,-0.016976226121187,-2.1781771183014,},
                              {-0.083971567451954,1.0917035341263,0.46338465809822,2.0865473747253,-0.016728902235627,-2.1738138198853,},
                              {-0.081478111445904,1.0777409076691,0.45020899176598,2.0725846290588,-0.016234258189797,-2.1598510742188,},
                              {-0.078984662890434,1.0567969083786,0.43607050180435,2.0516407489777,-0.015492288395762,-2.1258172988892,},
                              {-0.075244478881359,1.0122910737991,0.41486275196075,2.0071349143982,-0.014997642487288,-2.0944013595581,},
                              {-0.073997750878334,0.99422383308411,0.4077935218811,1.9888089895248,-0.01475031953305,-2.0760753154755,},
                              {-0.071504302322865,0.95772713422775,0.39365503191948,1.9469209909439,-0.014255673624575,-2.0341875553131,},
                              {-0.070257574319839,0.9394788146019,0.38658577203751,1.9233590364456,-0.014008350670338,-2.0106256008148,},
                              {-0.067764118313789,0.90298217535019,0.37244728207588,1.8709992170334,-0.013513705693185,-1.9582656621933,},
                              {-0.064023941755295,0.84823721647263,0.35123956203461,1.7793694734573,-0.012771736830473,-1.8666359186172,},
                              {-0.061530485749245,0.81174057722092,0.33710107207298,1.709556221962,-0.012277090921998,-1.7968226671219,},
                              {-0.059037029743195,0.77524393796921,0.32296258211136,1.6327617168427,-0.011782445013523,-1.7200281620026,},
                              {-0.05779030546546,0.75699561834335,0.31589335203171,1.5917465686798,-0.011535122059286,-1.6790130138397,},
                              {-0.05529684945941,0.720498919487,0.30175486207008,1.5044801235199,-0.011040476150811,-1.5917465686798,},
                              {-0.05280339717865,0.68400228023529,0.28761637210846,1.4102323055267,-0.010545830242336,-1.4974987506866,},
                              {-0.0503099411726,0.64750564098358,0.27347788214684,1.3115719556808,-0.010051184333861,-1.3962696790695,},
                              {-0.04781648889184,0.61100900173187,0.25933939218521,1.2128410339355,-0.009556538425386,-1.2880592346191,},
                              {-0.046569760888815,0.59276068210602,0.25227013230324,1.1634755134583,-0.0093092154711485,-1.2313359975815,},
                              {-0.044076308608055,0.55626404285431,0.23813165724277,1.064744591713,-0.0088145704939961,-1.1126536130905,},
                              {-0.041582852602005,0.5197674036026,0.22399316728115,0.9660137295723,-0.0083199245855212,-0.99171060323715,},
                              {-0.03784267231822,0.46502241492271,0.20278543233871,0.81791734695435,-0.0075779557228088,-0.82305532693863,},
                              {-0.03534922003746,0.42852574586868,0.18864694237709,0.71918648481369,-0.0070833098143339,-0.71934515237808,},
                              {-0.03285576403141,0.39202910661697,0.17450846731663,0.62261629104614,-0.006588663905859,-0.62261629104614,},
                              {-0.03036231175065,0.35553246736526,0.160369977355,0.53286874294281,-0.0060940179973841,-0.53286874294281,},
                              {-0.029115583747625,0.33728411793709,0.15330073237419,0.49061298370361,-0.0058466950431466,-0.49061298370361,},
                              {-0.026622131466866,0.30078747868538,0.13916224241257,0.41133740544319,-0.005352049600333,-0.41133740544319,},
                              {-0.02537540346384,0.28253915905952,0.13209299743176,0.37431761622429,-0.0051047266460955,-0.37431761622429,},
                              {-0.022881949320436,0.24604250490665,0.11795450747013,0.30551400780678,-0.0046100807376206,-0.30551400780678,},
                              {-0.020388497039676,0.20954586565495,0.10381601750851,0.24369172751904,-0.0041154348291457,-0.24369172751904,},
                              {-0.017895042896271,0.17304921150208,0.089677534997463,0.1888507604599,-0.0036207891535014,-0.1888507604599,},
                              {-0.015401588752866,0.13655257225037,0.075539045035839,0.14099110662937,-0.0031261432450265,-0.14099110662937,},
                              {-0.014154861681163,0.11830423772335,0.068469800055027,0.11967927962542,-0.0028788205236197,-0.11967927962542,},
                              {-0.011661407537758,0.082291603088379,0.054331310093403,0.082291603088379,-0.0023841746151447,-0.082291603088379,},
                              {-0.0091679533943534,0.05188525095582,0.040192823857069,0.05188525095582,-0.0018895288230851,-0.05188525095582,},
                              {-0.006674500182271,0.028460210189223,0.02605433575809,0.028460210189223,-0.0013948830310255,-0.028460210189223,},
                              {-0.004181046038866,0.012016489170492,0.012016489170492,0.012016489170492,-0.00090023718075827,-0.012016489170492,},
                              {-0.0016875923611224,0.0025540848728269,0.0025540848728269,0.0025540848728269,-0.00040559135959484,-0.0025540848728269,},
                              {-0.0008027721196413,0.00087266461923718,-0.00087266461923718,0,-0.00083420804003254,0,},
                              {-0.0033055625390261,0.0078539820387959,-0.0078539820387959,0,-0.0035920946393162,0,},
                              {-0.005808352958411,0.021816615015268,-0.021816615015268,0,-0.0063499808311462,0,},
                              {-0.0083111440762877,0.042760565876961,-0.042760565876961,0,-0.0091078672558069,0,},
                              {-0.010813933797181,0.070685833692551,-0.070685833692551,0,-0.011865753680468,0,},
                              {-0.013316724449396,0.10559242218733,-0.10559242218733,0,-0.014623640105128,0,},
                              {-0.015819516032934,0.14748032391071,-0.14748032391071,0,-0.017381526529789,0,},
                              {-0.018322305753827,0.19634954631329,-0.19634954631329,0,-0.02013941295445,0,},
                              {-0.022076491266489,0.2827433347702,-0.2827433347702,0,-0.024276243522763,0,},
                              {-0.024579282850027,0.34761375188828,-0.34906584024429,0,-0.027034129947424,0,},
                              {-0.02708207257092,0.41292417049408,-0.42146262526512,0,-0.029792016372085,0,},
                              {-0.029584862291813,0.47821444272995,-0.48973360657692,0,-0.032549902796745,0,},
                              {-0.032087653875351,0.53950411081314,-0.55102330446243,0,-0.035307787358761,0,},
                              {-0.034590445458889,0.59381246566772,-0.60533159971237,0,-0.038065675646067,0,},
                              {-0.037093233317137,0.6411395072937,-0.65265864133835,0,-0.040823560208082,0,},
                              {-0.038344629108906,0.66218501329422,-0.67370414733887,0,-0.04220250621438,0,},
                              {-0.040847420692444,0.69904005527496,-0.71055924892426,0,-0.044960390776396,0,},
                              {-0.043350212275982,0.7289137840271,-0.74043297767639,0,-0.047718279063702,0,},
                              {-0.04585300013423,0.75180619955063,-0.76332539319992,0,-0.050476163625717,0,},
                              {-0.048355791717768,0.76771730184555,-0.77923649549484,0,-0.053234051913023,0,},
                              {-0.050858583301306,0.77664709091187,-0.78816628456116,0,-0.055991936475039,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,},
                              {-0.052359879016876,0.77876591682434,-0.79028511047363,0,-0.057595863938332,0,}
                   };


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
    printf("cannot connect to V-rep.\n");
    return(0);
}


int main(int argc,char* argv[])
{
    printf("Simulation with controller.\n");
    //初始化控制器
    controller_abb4600_initialize();

    //连接V-rep
    int clientID=simxStart((simxChar*)"127.0.0.1",19997,true,true,2000,5);

    float jointPosition[6] = {0};
    float jointVel[6] = {0};
    int i = 0; // temp counter

    // 目标关节位置、速度和加速度
//    float qd[6] = {1.5F, -0.6F, 1.0F, 0.5F, 0.5F, 1.0};
//    float qd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F};
//    float dqd[6] = { 0.5F, -0.5F, 0.2F, 0.1F, 0.1F, 0.1F };
//    float ddqd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };
    // test
//    float qd[6] = {-0.087F, 1.1F, 0.47F, 2.2F, 0.02F, 2.18F};
//    float qd[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F};
    float *qd = pathSampled[0];
    // count/3
//    float dqd[6] = { 0.15F, 0.1F, 0.15F, 0.1F, 0.15F, 0.1F };
//    float ddqd[6] = { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F };
//    float dqd[6] = { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F };
//    float ddqd[6] = { 0.15F, 0.15F, 0.15F, 0.1F, 0.1F, 0.15F };
    float dqd[6] = { 0.25F, 0.25F, 0.25F, 0.25F, 0.25F, 0.25F };
    float ddqd[6] = { 0.33F, 0.33F, 0.33F, 0.33F, 0.33F, 0.33F };

//    //count /8
//    float dqd[6] = { 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F };
//    float ddqd[6] = { 0.35F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F };

    float tau[6] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F };
    float setVel = 9999;
    float torqueLimit[6] = {10000.0F, 20000.0F, 20000.0F, 10000.0F, 10000.0F, 10000.0F};  // 前三轴的力矩限幅适当给大一些， 太小无法控制机械臂
//    float torqueDeadZone[6] = {20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F};
    float littleNum[6] = {0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F};

    int jointNum = 6;
//    char jointName[] = "IRB4600_joint";
    char ch_string[2] = {0};
    int jointHandleGet[6]={0}; //joint handle

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
            itoa(i+1,ch_string,10); //关节序号
            int ret = simxGetObjectHandle(clientID, strcat(strcat(jointName, ch_string), "#1"), &handle, simx_opmode_blocking);
            //ret = simxGetObjectHandle(clientID, strcat(strcat(jointName, string), "#1"), &handle, simx_opmode_blocking);
            if(ret == simx_return_ok)
            {
//                printf("%d %d \n", i,handle);

                jointHandleGet[i] = handle;

            }
            else
                printf("Connot get joint handle\n");
        }

        // 打印出jointHandleGet
        for(i = 0; i < jointNum; i++)
        {
            printf("%d   ", jointHandleGet[i]);
        }

        simxSynchronousTrigger(clientID);
//        extApi_sleepMs(2000);

        //获取关节位置
        for(i = 0; i < jointNum; i++)
        {
//            extApi_sleepMs(10);
            float jp = 0;
            simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_streaming); //first call
//            extApi_sleepMs(10);
            int ret = simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_buffer); //following calls
//            if(ret == simx_return_ok)
//                jointPosition[i] = jp;
//            else
//                printf("Connot get joint position\n");
            while(simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_buffer) != simx_return_ok) {}
            jointPosition[i] = jp;  //返回值单位为rad
        }

        // 打印出jointPosition
        for(i = 0; i < jointNum; i++)
        {
            printf("%f   ", jointPosition[i]);
        }

        int startTime=extApi_getTimeInMs();
        int lastCmdTime, currentTime;
        currentTime = simxGetLastCmdTime(clientID);
        lastCmdTime = currentTime;
        simxSynchronousTrigger(clientID);
        //while (extApi_getTimeDiffInMs(startTime) < 10000)
        static int count = 0;

        while (simxGetConnectionId(clientID) != -1)
        {
//            //确定目标关节位置
            if(count/15 < 68)
            {
                qd = pathSampled[count/15];
//                printf("count/8: %d \n", count/3);
            }
            else
                qd = pathSampled[67];

            // 1.更新时间
            currentTime = simxGetLastCmdTime(clientID);
            float dt = (currentTime - lastCmdTime) / 1000.0;

            // 2.获取关节位置和计算关节速度
            for(i = 0; i < jointNum; i++)
            {
                float jp = 0;
                simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_streaming); //first call
                int ret = simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_buffer); //following calls

                while(simxGetJointPosition(clientID, jointHandleGet[i], &jp, simx_opmode_buffer) != simx_return_ok) {}

                // 关节速度
                jointVel[i] = (jp - jointPosition[i]) / dt ;
                // 关节位置
                jointPosition[i] = jp;
            }
//            printf("joint1 position:%f, joint1 vel:%f \n", jointPosition[0], jointVel[0]);

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
//                printf("tau:%f ", setTau);
                simxSetJointTargetVelocity(clientID, jointHandleGet[i], setVel, simx_opmode_oneshot);
                simxSetJointForce(clientID, jointHandleGet[i], setTau, simx_opmode_oneshot);

            }

            //4. 更新参数
            lastCmdTime = currentTime;



            simxSynchronousTrigger(clientID);
            ++count;
            extApi_sleepMs(5); //控制周期为5ms
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

    else
    {
        printf("cannot connect to V-rep.\n");
        return 0;
    }

    //关闭控制器
    controller_abb4600_terminate();
    return(0);
}
