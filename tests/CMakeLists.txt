find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_B test_B.cpp)
target_link_libraries(test_B GTest::GTest GTest::Main NOD_B NOD)

