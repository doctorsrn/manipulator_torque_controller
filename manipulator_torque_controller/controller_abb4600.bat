@if not "%MINGW_ROOT%" == "" (@set "PATH=%PATH%;%MINGW_ROOT%")

cd .

if "%1"=="" ("E:\PROGRA~1\MATLAB\R2018a\bin\win64\gmake"  -f controller_abb4600.mk all) else ("E:\PROGRA~1\MATLAB\R2018a\bin\win64\gmake"  -f controller_abb4600.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
