include(FetchContent)

# Ensure googletest uses the same MSVC runtime as the tests (dynamic CRT)
set(gtest_force_shared_crt ON CACHE BOOL "Use shared CRT for gtest" FORCE)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(leet_code_tests
  twosum_test.cpp
  merge_sorted_array_test.cpp
)

target_link_libraries(leet_code_tests PRIVATE gtest_main leet_code)

add_custom_command(TARGET leet_code_tests POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:leet_code>
    $<TARGET_FILE_DIR:leet_code_tests>
)

enable_testing()
add_test(NAME leet_code_tests COMMAND leet_code_tests)
