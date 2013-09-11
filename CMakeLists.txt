cmake_minimum_required (VERSION 2.6)
project (Robot)

set (SOURCES
    main.cpp
    Robot.cpp
    serialib.cpp
    )

add_executable (Robot ${SOURCES})
