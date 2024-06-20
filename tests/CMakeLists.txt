#find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})

#add_executable(test_B test_B.cpp)
#target_link_libraries(test_B GTest::GTest GTest::Main NOD_B NOD)
#target_link_libraries(test_B ${GTEST_LIBRARIES} NOD_B NOD)


include_directories(${CMAKE_SOURCE_DIR}/src)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_B test_B.cpp)

target_link_libraries(test_B PRIVATE NOD_B NOD gtest gtest_main)
