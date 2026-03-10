file(GLOB_RECURSE PROBLEM_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(leet_code SHARED ${PROBLEM_SOURCES})
target_include_directories(leet_code PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include)

# When building as a shared library on Windows we need to export symbols.
# Define LEET_CODE_EXPORTS for the library build so headers can use it to
# set __declspec(dllexport) / __declspec(dllimport).
if (MSVC)
  target_compile_definitions(leet_code PRIVATE LEET_CODE_EXPORTS)
endif()

set_target_properties(leet_code PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

