cmake_minimum_required(VERSION 3.5)
project(trabalhoCG)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Character/Arm.cpp
    Character/Arm.h
    Character/Body.cpp
    Character/Body.h
    Character/Calf.cpp
    Character/Calf.h
    Character/Character.cpp
    Character/Character.h
    Character/Head.cpp
    Character/Head.h
    Character/Thigh.cpp
    Character/Thigh.h
    Heroes/HumanoidCharacter.cpp
    Heroes/HumanoidCharacter.h
    Scenario/Base.cpp
    Scenario/Base.h
    Scenario/Projectile.cpp
    Scenario/Scenario.cpp
    Scenario/Scenario.h
    Scenario/Tower.cpp
    Scenario/Tower.h
    Util/ClickArrow.cpp
    Util/ClickArrow.h
    Util/LifeBar.cpp
    Util/LifeBar.h
    Util/ObjParser.cpp
    Util/ObjParser.h
    Util/Position.cpp
    Util/Position.h
    Util/Texture.cpp
    Util/Texture.h
    game.h
    gLib.h
    main.cpp
    makefile
    TeaPot3D.cpp
    teste3D.cpp
    testeOpenGl.cpp
    testeScenario.cpp)

add_executable(trabalhoCG ${SOURCE_FILES})