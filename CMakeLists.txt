cmake_minimum_required(VERSION 3.7)
project(qml_demo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

set(QT_PATH "../toolbox/deps/qtroot-linux/")
set(CMAKE_PREFIX_PATH ${QT_PATH})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(QT5_MODULES Core Widgets Gui Quick Qml Concurrent)

foreach(QT5_MODULE ${QT5_MODULES})
    find_package(Qt5${QT5_MODULE})
endforeach()

add_executable(qml_demo ${SOURCE_FILES} resources/qmldemo.qrc)

qt5_use_modules(qml_demo ${QT5_MODULES})
