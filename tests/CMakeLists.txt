find_package(GTest REQUIRED)

file(GLOB_RECURSE SOURCES
    ../src/*.cpp
    ../src/*.h
)

file (GLOB_RECURSE TEST_SOURCES
  *.cpp
)

add_executable(leet_code_tests
  ${TEST_SOURCES}
  ${SOURCES}
)

target_include_directories(leet_code_tests
  PRIVATE
  ../src
  ../src/include
)

target_link_libraries(leet_code_tests
  PRIVATE
  GTest::gtest
  GTest::gtest_main
)

