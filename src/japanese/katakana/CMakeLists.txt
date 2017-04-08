add_library(japanese-katakana katakana.cpp puresounds.cpp impuresounds.cpp diphthongs.cpp specialcharacters.cpp)

target_include_directories(japanese-katakana PUBLIC "${CMAKE_SOURCE_DIR}/include")

if(NOT MSVC)
    target_compile_options(japanese-katakana PRIVATE -std=c++14 -Wall -Werror -pedantic)
endif()
