add_library(NOD_B NOD_B.cpp)
add_library(NOD NOD.cpp)
set_target_properties(NOD PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(NOD_B PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(NOD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(NOD_B PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(NOD NOD_B)
