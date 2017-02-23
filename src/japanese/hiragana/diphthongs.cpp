#include <japanese/hiragana/diphthongs.hpp>

namespace japanese {
namespace hiragana {

    Diphthongs::Diphthongs() : Hiragana() {}

    Diphthongs::Diphthongs(std::unordered_map<std::string, std::string> characters) : Hiragana(characters){}

namespace sounds {

    kySound::kySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("kya", "きゃ"), 
                                                                                 std::pair<std::string, std::string>("kyu", "きゅ"),
                                                                                 std::pair<std::string, std::string>("kyo", "きょ")}) {}

    gySound::gySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("gya", "ぎゃ"), 
                                                                                 std::pair<std::string, std::string>("gyu", "ぎゅ"),
                                                                                 std::pair<std::string, std::string>("gyo", "ぎょ")}) {}

    shSound::shSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("sha", "しゃ"), 
                                                                                 std::pair<std::string, std::string>("shu", "しゅ"),
                                                                                 std::pair<std::string, std::string>("sho", "しょ")}) {}

    jSound::jSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ja", "じゃ"), 
                                                                               std::pair<std::string, std::string>("ju", "じゅ"),
                                                                               std::pair<std::string, std::string>("jo", "じょ")}) {}

    chSound::chSound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("cha", "ちゃ"), 
                                                                                 std::pair<std::string, std::string>("chu", "ちゅ"),
                                                                                 std::pair<std::string, std::string>("cho", "ちょ")}) {}

    nySound::nySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("nya", "にゃ"), 
                                                                                 std::pair<std::string, std::string>("nyu", "にゅ"),
                                                                                 std::pair<std::string, std::string>("nyo", "にょ")}) {}

    hySound::hySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("hya", "ひゃ"), 
                                                                                 std::pair<std::string, std::string>("hyu", "ひゅ"),
                                                                                 std::pair<std::string, std::string>("hyo", "ひょ")}) {}

    bySound::bySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("bya", "びゃ"), 
                                                                                 std::pair<std::string, std::string>("byu", "びゅ"),
                                                                                 std::pair<std::string, std::string>("byo", "びょ")}) {}

    pySound::pySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("pya", "ぴゃ"), 
                                                                                 std::pair<std::string, std::string>("pyu", "ぴゅ"),
                                                                                 std::pair<std::string, std::string>("pyo", "ぴょ")}) {}

    mySound::mySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("mya", "みゃ"), 
                                                                                 std::pair<std::string, std::string>("myu", "みゅ"),
                                                                                 std::pair<std::string, std::string>("myo", "みょ")}) {}

    rySound::rySound() : Diphthongs(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("rya", "りゃ"), 
                                                                                 std::pair<std::string, std::string>("ryu", "りゅ"),
                                                                                 std::pair<std::string, std::string>("ryo", "りょ")}) {}

} // namespace sounds
} // namespace hiragana
} // namespace japanese