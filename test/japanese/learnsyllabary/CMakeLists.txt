add_executable(syllabary-battle main.cpp learnsyllabary.cpp)

target_include_directories(syllabary-battle PRIVATE "${CMAKE_SOURCE_DIR}/include")

if(NOT MSVC)
    target_compile_options(syllabary-battle PRIVATE -std=c++14 -Wall -Werror -pedantic)
endif()

target_link_libraries(syllabary-battle PRIVATE japanese-hiragana japanese-katakana CONAN_PKG::googlemock)

add_test(syllabary-battle syllabary-battle)
