## To run this file:
#       cmake .
#       cmake --build .
#       ./bin/app


cmake_minimum_required(VERSION 3.16)

set (PROJECT_NAME "shape")

# set (tests/TEST_NAME, "mock_main")

project(${PROJECT_NAME}
        VERSION 1.0
        LANGUAGES C CXX ASM
        DESCRIPTION "A CMake Experiment"
)

# Set CPPSOURCES with all C++ Sources
set(CPPSOURCES 
    main.cpp 
    shape.cpp
)

# be sure there's exactly one main() function in the source files
add_executable(
    ${PROJECT_NAME} 
    ${CPPSOURCES}
) 

#target_link_libraries(app applib)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_compile_options(${PROJECT_NAME} PRIVATE 
            -Wall -Wextra -Wpedantic 
            -lrt -lm 
            -I$GOOGLETESTDIR/include 
            -L$GOOGLETESTDIR/lib 
            -lgtest -lpthread
)
