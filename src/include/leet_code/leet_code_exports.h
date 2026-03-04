// Single place for shared-library export/import macro
#pragma once

#if defined(_WIN32) || defined(_WIN64)
#  ifdef LEET_CODE_EXPORTS
#    define LEET_CODE_API __declspec(dllexport)
#  else
#    define LEET_CODE_API __declspec(dllimport)
#  endif
#else
#  define LEET_CODE_API
#endif
