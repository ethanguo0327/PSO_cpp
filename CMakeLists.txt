cmake_minimum_required(VERSION 3.12)
project(SwarmOpt_master)

set(CMAKE_CXX_STANDARD 14)

find_package(PythonLibs 2.7)


include_directories(.)

add_executable(SwarmOpt_master
        demo/test_1.cpp
        #demo/test_2.cpp
        #demo/test_3.cpp
        #demo/test_4.cpp
        db_connection.hpp
        includes.hpp
        obj_func.hpp
        priority_queue.hpp
        pso.hpp
        variables.hpp
        verbose.hpp)
target_include_directories(SwarmOpt_master PRIVATE ${PYTHON_INCLUDE_DIRS})
target_link_libraries(SwarmOpt_master ${PYTHON_LIBRARIES})