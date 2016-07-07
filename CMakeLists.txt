#----------------------------------------------------------------------------#
# https://www.johnlamp.net/cmake-tutorial-6-realistically-getting-a-boost.html
#----------------------------------------------------------------------------#

cmake_minimum_required(VERSION 3.5)
project(boost_regex)

#----------------------------------------------------------------------------#
# Configure Boost Libraries 1.61.0
#----------------------------------------------------------------------------#
set(BOOST_INCLUDE_DIR "/usr/local/boost_1_61_0/")
set(BOOST_LIBRARY_DIR "/usr/local/boost_1_61_0/libs/")
set(Boost_USE_STATIC_LIBS     ON) # only find static libs
set(Boost_USE_MULTITHREADED   ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 1.61.0 COMPONENTS ${BOOST_INCLUDE_DIR})
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})


if(Boost_FOUND)
    include_directories(${BOOST_INCLUDE_DIR})
    add_executable(main main.cpp)
    target_link_libraries(main ${BOOST_LIBRARY_DIR})
endif()
#----------------------------------------------------------------------------#
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES main.cpp SplitString.cpp SplitString.h)
add_executable(boost_regex ${SOURCE_FILES})

#----------------------------------------------------------------------------#