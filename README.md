[comment]: # (to view this file in pretty format in VS Code, right click Open Preview)

# EchoUAS Notes #
### Overview ###
The build process uses hwdef.dat files to control what gets built.  
These files can be found in the following **directories**:

- Battery Monitor folder: [libraries/AP_HAL_ChibiOS/hwdef/EchoUAS-BM/](libraries/AP_HAL_ChibiOS/hwdef/EchoUAS-BM/)
- Include files (pinouts etc) for our devices that use L431: [libraries/AP_HAL_ChibiOS/hwdef/EchoUAS-L431/](libraries/AP_HAL_ChibiOS/hwdef/EchoUAS-L431/)  
  (these are included in the first line of hwdef.dat)

More details can be found here [Build Instructions](BUILD.md)  
There is a new file created for EchoUAS Battery monitor. See the [programming notes](libraries/AP_HAL_ChibiOS/hwdef/EchoUAS-BM/README.md) 

### WSL Extension ###
Install WSL on Windows and then install the WSL Extension in VS Code before you clone anything.  
Click the blue ```><``` button in the bottom left and Connect to WSL. This opens a new instance of VS Code in linux.  
Now clone the EchoUAS fork of the ardupilot repo into the home directory of your linux OS. Be sure to use --recursive  
eg. ``` git clone --recursive https://github.com/Echo-Unmanned-Aerial-Systems/ardupilot.git ```  
Commands should be run from the terminal which can be opened from the Top menu in VSCode: Terminal > New Terminal

### Oops, I did not use --recursive when I cloned the ardupilot repo ###
Check if the sub modules are installed, run the following from the terminal, in your ardupilot directory ```git submodule status```  
If the modules have a leading hyphen, they are not checked out.  
To fix this, run:  ```git submodule update --init --recursive```  

### Install PIP3 ### 
PIP is a well used python package manager. You need it to install the rest of the dependancies.  
Follow the instructions below, for Debian/Ubuntu flavored linux.   
https://www.geeksforgeeks.org/how-to-install-pip-in-linux/

### Install requirements ###
```
cd ~/ardupilot/modules/ChibiOS/tools/workflows
pip3 install -r requirements.txt
```

### Install ARM Toolchain
```
sudo apt update
sudo apt install gcc-arm-none-eabi
sudo apt install binutils-arm-none-eabi
```

## Build steps: ##

1. Open a new terminal: VSCode > Terminal > New Terminal
1. Navigate to the ardupilot directory:  use ```cd ~/ardupilot```  
    (note: tilda is a linux shortcut to the home folder)
1. Configure the bootloader ```./waf configure --board EchoUAS-BM --bootloader```  
    if it complains about pexpect install it with ```pip install pexpect```

1. Build the bootloader: ``` ./waf bootloader ```  
It might ask you to install *empy*. If so run: ```python3 -m pip install empy==3.3.4 ```  
Then repeat step 2  
There should be a bunch of new files in the ardupilot/build/EchoUAS-BM directory

1. Configure the board ```./waf configure --board EchoUAS-BM```  
If you get the following error:
    ```
    Error: Bootloader (./Tools/bootloaders/EchoUAS-BM_bl.bin) does not exist and AP_BOOTLOADER_FLASHING_ENABLED   
    Please run: Tools/scripts/build_bootloaders.py EchoUAS-BM 
    ```
    it means you need to run the suggested .py script with python3 from the root directory  
eg:  ```ardupilot> python3 Tools/scripts/build_bootloaders.py EchoUAS-BM```  

    *Note: What this configure step does:*  
    - *copies the defines in the hwdef.dat to a header file in the build directory: [build/MatekL431-BattMon/hwdef.h](build/MatekL431-BattMon/hwdef.h)*  

1. Build using: ``` ./waf AP_Periph ```  
  If you get the error: ```ModuleNotFoundError: No module named 'serial'``` you need to install a pyserial module ```pip3 install pyserial```  
  If you get an error regarding _pexpect_ , try ```pip install pexpect```  
  then build again.  
  Note: you can find the AP_Periph.bin file and the AP_bootloader.bin files at [ardupilot/build/EchoUAS-BM/bin](build/EchoUAS-BM/bin) 

1. If you are programming a new chip, it will not have a bootloader. This is required for Mission Planner to find the device.  
  To do this you will need:
    - a ST-Link device connected via USB, with you board connected to SWCLK and SWDIO.  
    - app called *STM32CubeProgrammer*.  
  
    From the *STM32CubeProgrammer* app:  
    - select the second tab: Erasing and Programming.  
    - hit CONNECT on the far right
    - incase there is some other program on the device, find the Erase flash memory tab, hit **Full chip erase**
    - in the *Download* section, under *File Path*, navigate to your AP_Bootloader.bin file and hit **Start Programming**
    - it should give you a success popup.

1. Once the bootloader is on, you can upload the main firmware using Mission Planner.  
    ```
    Setup >  
      DroneCAN/UAVCAN
        click button: MAVlink-CAN1
    ```
    You should see a list of connected can devices. Choose menu > upload.  
    It will ask if you want to search the internet for an update. Choose **no** and then select your local .bin file.  
    



 ***

# ArduPilot Project

<a href="https://ardupilot.org/discord"><img src="https://img.shields.io/discord/674039678562861068.svg" alt="Discord">

[![Test Copter](https://github.com/ArduPilot/ardupilot/workflows/test%20copter/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_copter.yml) [![Test Plane](https://github.com/ArduPilot/ardupilot/workflows/test%20plane/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_plane.yml) [![Test Rover](https://github.com/ArduPilot/ardupilot/workflows/test%20rover/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_rover.yml) [![Test Sub](https://github.com/ArduPilot/ardupilot/workflows/test%20sub/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_sub.yml) [![Test Tracker](https://github.com/ArduPilot/ardupilot/workflows/test%20tracker/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_tracker.yml)

[![Test AP_Periph](https://github.com/ArduPilot/ardupilot/workflows/test%20ap_periph/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_sitl_periph.yml) [![Test Chibios](https://github.com/ArduPilot/ardupilot/workflows/test%20chibios/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_chibios.yml) [![Test Linux SBC](https://github.com/ArduPilot/ardupilot/workflows/test%20Linux%20SBC/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_linux_sbc.yml) [![Test Replay](https://github.com/ArduPilot/ardupilot/workflows/test%20replay/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_replay.yml)

[![Test Unit Tests](https://github.com/ArduPilot/ardupilot/workflows/test%20unit%20tests%20and%20sitl%20building/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_unit_tests.yml)[![test size](https://github.com/ArduPilot/ardupilot/actions/workflows/test_size.yml/badge.svg)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_size.yml)

[![Test Environment Setup](https://github.com/ArduPilot/ardupilot/actions/workflows/test_environment.yml/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_environment.yml)

[![Cygwin Build](https://github.com/ArduPilot/ardupilot/actions/workflows/cygwin_build.yml/badge.svg)](https://github.com/ArduPilot/ardupilot/actions/workflows/cygwin_build.yml) [![Macos Build](https://github.com/ArduPilot/ardupilot/actions/workflows/macos_build.yml/badge.svg)](https://github.com/ArduPilot/ardupilot/actions/workflows/macos_build.yml)

[![Coverity Scan Build Status](https://scan.coverity.com/projects/5331/badge.svg)](https://scan.coverity.com/projects/ardupilot-ardupilot)

[![Test Coverage](https://github.com/ArduPilot/ardupilot/actions/workflows/test_coverage.yml/badge.svg?branch=master)](https://github.com/ArduPilot/ardupilot/actions/workflows/test_coverage.yml)

[![Autotest Status](https://autotest.ardupilot.org/autotest-badge.svg)](https://autotest.ardupilot.org/)

ArduPilot is the most advanced, full-featured, and reliable open source autopilot software available.
It has been under development since 2010 by a diverse team of professional engineers, computer scientists, and community contributors.
Our autopilot software is capable of controlling almost any vehicle system imaginable, from conventional airplanes, quad planes, multi-rotors, and helicopters to rovers, boats, balance bots, and even submarines.
It is continually being expanded to provide support for new emerging vehicle types.

## The ArduPilot project is made up of: ##

- ArduCopter: [code](https://github.com/ArduPilot/ardupilot/tree/master/ArduCopter), [wiki](https://ardupilot.org/copter/index.html)

- ArduPlane: [code](https://github.com/ArduPilot/ardupilot/tree/master/ArduPlane), [wiki](https://ardupilot.org/plane/index.html)

- Rover: [code](https://github.com/ArduPilot/ardupilot/tree/master/Rover), [wiki](https://ardupilot.org/rover/index.html)

- ArduSub : [code](https://github.com/ArduPilot/ardupilot/tree/master/ArduSub), [wiki](http://ardusub.com/)

- Antenna Tracker : [code](https://github.com/ArduPilot/ardupilot/tree/master/AntennaTracker), [wiki](https://ardupilot.org/antennatracker/index.html)

## User Support & Discussion Forums ##

- Support Forum: <https://discuss.ardupilot.org/>

- Community Site: <https://ardupilot.org>

## Developer Information ##

- Github repository: <https://github.com/ArduPilot/ardupilot>

- Main developer wiki: <https://ardupilot.org/dev/>

- Developer discussion: <https://discuss.ardupilot.org>

- Developer chat: <https://discord.com/channels/ardupilot>

## Top Contributors ##

- [Flight code contributors](https://github.com/ArduPilot/ardupilot/graphs/contributors)
- [Wiki contributors](https://github.com/ArduPilot/ardupilot_wiki/graphs/contributors)
- [Most active support forum users](https://discuss.ardupilot.org/u?order=post_count&period=quarterly)
- [Partners who contribute financially](https://ardupilot.org/about/Partners)

## How To Get Involved ##

- The ArduPilot project is open source and we encourage participation and code contributions: [guidelines for contributors to the ardupilot codebase](https://ardupilot.org/dev/docs/contributing.html)

- We have an active group of Beta Testers to help us improve our code: [release procedures](https://ardupilot.org/dev/docs/release-procedures.html)

- Desired Enhancements and Bugs can be posted to the [issues list](https://github.com/ArduPilot/ardupilot/issues).

- Help other users with log analysis in the [support forums](https://discuss.ardupilot.org/)

- Improve the wiki and chat with other [wiki editors on Discord #documentation](https://discord.com/channels/ardupilot)

- Contact the developers on one of the [communication channels](https://ardupilot.org/copter/docs/common-contact-us.html)

## License ##

The ArduPilot project is licensed under the GNU General Public
License, version 3.

- [Overview of license](https://ardupilot.org/dev/docs/license-gplv3.html)

- [Full Text](https://github.com/ArduPilot/ardupilot/blob/master/COPYING.txt)

## Maintainers ##

ArduPilot is comprised of several parts, vehicles and boards. The list below
contains the people that regularly contribute to the project and are responsible
for reviewing patches on their specific area.

- [Andrew Tridgell](https://github.com/tridge):
  - ***Vehicle***: Plane, AntennaTracker
  - ***Board***: Pixhawk, Pixhawk2, PixRacer
- [Francisco Ferreira](https://github.com/oxinarf):
  - ***Bug Master***
- [Grant Morphett](https://github.com/gmorph):
  - ***Vehicle***: Rover
- [Willian Galvani](https://github.com/williangalvani):
  - ***Vehicle***: Sub
  - ***Board***: Navigator
- [Michael du Breuil](https://github.com/WickedShell):
  - ***Subsystem***: Batteries
  - ***Subsystem***: GPS
  - ***Subsystem***: Scripting
- [Peter Barker](https://github.com/peterbarker):
  - ***Subsystem***: DataFlash, Tools
- [Randy Mackay](https://github.com/rmackay9):
  - ***Vehicle***: Copter, Rover, AntennaTracker
- [Siddharth Purohit](https://github.com/bugobliterator):
  - ***Subsystem***: CAN, Compass
  - ***Board***: Cube*
- [Tom Pittenger](https://github.com/magicrub):
  - ***Vehicle***: Plane
- [Bill Geyer](https://github.com/bnsgeyer):
  - ***Vehicle***: TradHeli
- [Emile Castelnuovo](https://github.com/emilecastelnuovo):
  - ***Board***: VRBrain
- [Georgii Staroselskii](https://github.com/staroselskii):
  - ***Board***: NavIO
- [Gustavo José de Sousa](https://github.com/guludo):
  - ***Subsystem***: Build system
- [Julien Beraud](https://github.com/jberaud):
  - ***Board***: Bebop & Bebop 2
- [Leonard Hall](https://github.com/lthall):
  - ***Subsystem***: Copter attitude control and navigation
- [Matt Lawrence](https://github.com/Pedals2Paddles):
  - ***Vehicle***: 3DR Solo & Solo based vehicles
- [Matthias Badaire](https://github.com/badzz):
  - ***Subsystem***: FRSky
- [Mirko Denecke](https://github.com/mirkix):
  - ***Board***: BBBmini, BeagleBone Blue, PocketPilot
- [Paul Riseborough](https://github.com/priseborough):
  - ***Subsystem***: AP_NavEKF2
  - ***Subsystem***: AP_NavEKF3
- [Víctor Mayoral Vilches](https://github.com/vmayoral):
  - ***Board***: PXF, Erle-Brain 2, PXFmini
- [Amilcar Lucas](https://github.com/amilcarlucas):
  - ***Subsystem***: Marvelmind
- [Samuel Tabor](https://github.com/samuelctabor):
  - ***Subsystem***: Soaring/Gliding
- [Henry Wurzburg](https://github.com/Hwurzburg):
  - ***Subsystem***: OSD
  - ***Site***: Wiki
- [Peter Hall](https://github.com/IamPete1):
  - ***Vehicle***: Tailsitters
  - ***Vehicle***: Sailboat
  - ***Subsystem***: Scripting
- [Andy Piper](https://github.com/andyp1per):
  - ***Subsystem***: Crossfire
  - ***Subsystem***: ESC
  - ***Subsystem***: OSD
  - ***Subsystem***: SmartAudio
- [Alessandro Apostoli ](https://github.com/yaapu):
  - ***Subsystem***: Telemetry
  - ***Subsystem***: OSD
- [Rishabh Singh ](https://github.com/rishabsingh3003):
  - ***Subsystem***: Avoidance/Proximity
- [David Bussenschutt ](https://github.com/davidbuzz):
  - ***Subsystem***: ESP32,AP_HAL_ESP32
- [Charles Villard ](https://github.com/Silvanosky):
  - ***Subsystem***: ESP32,AP_HAL_ESP32
