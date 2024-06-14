cmake_minimum_required(VERSION 3.0)
project(ffi LANGUAGES CXX C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(CommonAPI 3.2.0 REQUIRED)
find_package(CommonAPI-SomeIP 3.2.0 REQUIRED)

include_directories(
  ./src-gen/core
  ./src-gen/someip
)

### Library Sources ###
FILE(GLOB CANTRANSCEIVER_LIB_SRCS ./src-gen/someip/v0/commonapi/CanTransceiver*.cpp)
add_library(CanTransceiver-someip SHARED ${CANTRANSCEIVER_LIB_SRCS})
target_link_libraries(CanTransceiver-someip CommonAPI CommonAPI-SomeIP)
set_target_properties(CanTransceiver-someip PROPERTIES VERSION 0.1 SOVERSION 0.1)

FILE(GLOB CARCONTROL_LIB_SRCS ./src-gen/someip/v0/commonapi/CarControl*.cpp)
add_library(CarControl-someip SHARED ${CARCONTROL_LIB_SRCS})
target_link_libraries(CarControl-someip CommonAPI CommonAPI-SomeIP)
set_target_properties(CarControl-someip PROPERTIES VERSION 0.1 SOVERSION 0.1)

FILE(GLOB CARINFO_LIB_SRCS ./src-gen/someip/v0/commonapi/CarInfo*.cpp)
add_library(CarInfo-someip SHARED ${CARINFO_LIB_SRCS})
target_link_libraries(CarInfo-someip CommonAPI CommonAPI-SomeIP)
set_target_properties(CarInfo-someip PROPERTIES VERSION 0.1 SOVERSION 0.1)

FILE(GLOB HEADUNIT_LIB_SRCS ./src-gen/someip/v0/commonapi/HeadUnit*.cpp)
add_library(HeadUnit-someip SHARED ${HEADUNIT_LIB_SRCS})
target_link_libraries(HeadUnit-someip CommonAPI CommonAPI-SomeIP)
set_target_properties(HeadUnit-someip PROPERTIES VERSION 0.1 SOVERSION 0.1)

FILE(GLOB JETSON_LIB_SRCS ./src-gen/someip/v0/commonapi/Jetson*.cpp)
add_library(Jetson-someip SHARED ${JETSON_LIB_SRCS})
target_link_libraries(Jetson-someip CommonAPI CommonAPI-SomeIP)
set_target_properties(Jetson-someip PROPERTIES VERSION 0.1 SOVERSION 0.1)

set(INSTALL_TARGETS 
    CanTransceiver-someip
    CarControl-someip
    CarInfo-someip
    HeadUnit-someip
    Jetson-someip
)

install(TARGETS ${INSTALL_TARGETS}
        LIBRARY DESTINATION ${INSTALL_LIB_DIR}
)