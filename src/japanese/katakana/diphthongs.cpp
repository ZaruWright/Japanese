#include <japanese/katakana/diphthongs.hpp>

namespace japanese {
namespace katakana {

    Diphthongs::Diphthongs() : Katakana() {}

    Diphthongs::Diphthongs(std::unordered_map<std::string, std::string> characters) : Katakana(characters){}

namespace sounds {

    kySound::kySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("kya", "キャ"), 
                                                                                 std::pair<std::string, std::string>("kyu", "キュ"),
                                                                                 std::pair<std::string, std::string>("kyo", "キョ")}) {}

    gySound::gySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("gya", "ギャ"), 
                                                                                 std::pair<std::string, std::string>("gyu", "ギュ"),
                                                                                 std::pair<std::string, std::string>("gyo", "ギョ")}) {}

    shSound::shSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("sha", "シャ"), 
                                                                                 std::pair<std::string, std::string>("shu", "シュ"),
                                                                                 std::pair<std::string, std::string>("sho", "ショ")}) {}

    jSound::jSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ja", "ジャ"), 
                                                                               std::pair<std::string, std::string>("ju", "ジュ"),
                                                                               std::pair<std::string, std::string>("jo", "ジョ")}) {}

    chSound::chSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("cha", "チャ"), 
                                                                                 std::pair<std::string, std::string>("chu", "チュ"),
                                                                                 std::pair<std::string, std::string>("cho", "チョ")}) {}

    nySound::nySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("nya", "ニャ"), 
                                                                                 std::pair<std::string, std::string>("nyu", "ニュ"),
                                                                                 std::pair<std::string, std::string>("nyo", "ニョ")}) {}

    hySound::hySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("hya", "ヒャ"), 
                                                                                 std::pair<std::string, std::string>("hyu", "ヒュ"),
                                                                                 std::pair<std::string, std::string>("hyo", "ヒョ")}) {}

    bySound::bySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("bya", "ビャ"), 
                                                                                 std::pair<std::string, std::string>("byu", "ビュ"),
                                                                                 std::pair<std::string, std::string>("byo", "ビョ")}) {}

    pySound::pySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("pya", "ピャ"), 
                                                                                 std::pair<std::string, std::string>("pyu", "ピュ"),
                                                                                 std::pair<std::string, std::string>("pyo", "ピョ")}) {}

    mySound::mySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("mya", "ミャ"), 
                                                                                 std::pair<std::string, std::string>("myu", "ミュ"),
                                                                                 std::pair<std::string, std::string>("myo", "ミョ")}) {}

    rySound::rySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("rya", "リャ"), 
                                                                                 std::pair<std::string, std::string>("ryu", "リュ"),
                                                                                 std::pair<std::string, std::string>("ryo", "リョ")}) {}

} // namespace sounds
} // namespace hiragana
} // namespace japanese