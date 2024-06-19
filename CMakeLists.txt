cmake_minimum_required(VERSION 3.4)
project(NOD_)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(src)
add_subdirectory(tests)


add_executable(main src/main.cpp src/NOD.cpp)
target_link_libraries(main NOD_B)

#asd
