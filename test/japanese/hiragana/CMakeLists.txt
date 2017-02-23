add_executable(hiragana-battle main.cpp)

target_include_directories(hiragana-battle PRIVATE "${CMAKE_SOURCE_DIR}/include")

if(NOT MSVC)
    target_compile_options(hiragana-battle PRIVATE -std=c++14 -Wall -Werror -pedantic)
endif()

target_link_libraries(hiragana-battle PRIVATE japanese-hiragana CONAN_PKG::googlemock)

add_test(hiragana-battle hiragana-battle)
