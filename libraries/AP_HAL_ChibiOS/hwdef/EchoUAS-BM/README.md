### Programming Notes: ###  

1. New file in *ardupilot/libraries/AP_BattMonitor* directory called: [AP_BattMonitor_EchoUAS.cpp](../../../../libraries/AP_BattMonitor/AP_BattMonitor_EchoUAS.cpp)  
    - copied from AP_BattMonitor_INA239.cpp
    - dummy cell voltages added in the read function definition: ```void AP_BattMonitor_INA239::read(void)```  
    - new define in the hwdef.dat: ```AP_BATTERY_ECHOUAS_ENABLED 1```


    *Note: when making a new .cpp file, dont forget to make a corresponding .h file and change the include in the .cpp file e.g. ```#include "AP_BattMonitor_EchoUAS.h"```*

1. The defines for the preprocessor are copied to [build/EchoUAS-BM/hwdef.h](build/EchoUAS-BM/hwdef.h) when the ```./waf configure -- board``` script runs  
This explains how the build knows what parts to compile and also tells intellisense knows what to grey out

1. File: ```libraries/AP_BattMonitor/AP_BattMonitor_config.h``` contains a new block:
    ```C++
    #ifndef AP_BATTERY_ECHOUAS_ENABLED
    #define AP_BATTERY_ECHOUAS_ENABLED 0
    #endif
    ```
    which explains why the preprocessor directives use **#if** and not **#ifdef**  
    *(otherwise the compiler would complain about all the constants that are not defined in hwdef.dat)*

1. The new header file also needs to be included in ```libraries/AP_BattMonitor/AP_BattMonitor.cpp``` *(or the compiler will freak out)*