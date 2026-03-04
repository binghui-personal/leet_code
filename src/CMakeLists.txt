file(GLOB_RECURSE PROBLEM_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(leet_code SHARED ${PROBLEM_SOURCES})

# Auto-export all symbols so MSVC generates an import library (.lib).
# Without this (and without manual __declspec(dllexport)), MSVC will
# build the DLL but NOT produce a .lib, causing link failures for consumers.
set_target_properties(leet_code PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)

target_include_directories(leet_code PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
