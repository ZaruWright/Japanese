add_library(japanese-hiragana hiragana.cpp puresounds.cpp impuresounds.cpp diphthongs.cpp)

target_include_directories(japanese-hiragana PUBLIC "${CMAKE_SOURCE_DIR}/include")

if(NOT MSVC)
    target_compile_options(japanese-hiragana PRIVATE -std=c++14 -Wall -Werror -pedantic)
endif()
