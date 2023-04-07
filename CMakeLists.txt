#CMakeLists.txt

cmake_minimum_required(VERSION 3.22)

PROJECT (main)

SET(SRC_LIST 
./src/main.cc
./src/FactoryEasy.cc
./src/Factory.cc)

INCLUDE_DIRECTORIES(./include)

ADD_EXECUTABLE(main ${SRC_LIST})
