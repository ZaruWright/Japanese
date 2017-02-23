#include <japanese/hiragana/impuresounds.hpp>

namespace japanese {
namespace hiragana {

    ImpureSounds::ImpureSounds() : Hiragana() {}

    ImpureSounds::ImpureSounds(std::unordered_map<std::string, std::string> characters) : Hiragana(characters){}

namespace sounds {

    gSound::gSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ga", "が"), 
                                                                               std::pair<std::string, std::string>("gi", "ぎ"),
                                                                               std::pair<std::string, std::string>("gu", "ぐ"),
                                                                               std::pair<std::string, std::string>("ge", "げ"),
                                                                               std::pair<std::string, std::string>("go", "ご")}) {}

    zSound::zSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("za", "ざ"), 
                                                                               std::pair<std::string, std::string>("ji", "じ"),
                                                                               std::pair<std::string, std::string>("zu", "ず"),
                                                                               std::pair<std::string, std::string>("ze", "ぜ"),
                                                                               std::pair<std::string, std::string>("zo", "ぞ")}) {}

    dSound::dSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("da", "だ"), 
                                                                               std::pair<std::string, std::string>("ji", "ぢ"),
                                                                               std::pair<std::string, std::string>("zu", "づ"),
                                                                               std::pair<std::string, std::string>("de", "で"),
                                                                               std::pair<std::string, std::string>("do", "ど")}) {}

    bSound::bSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ba", "ば"), 
                                                                               std::pair<std::string, std::string>("bi", "び"),
                                                                               std::pair<std::string, std::string>("bu", "ぶ"),
                                                                               std::pair<std::string, std::string>("be", "べ"),
                                                                               std::pair<std::string, std::string>("bo", "ぼ")}) {}

    pSound::pSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("pa", "ぱ"), 
                                                                               std::pair<std::string, std::string>("pi", "ぴ"),
                                                                               std::pair<std::string, std::string>("pu", "ぷ"),
                                                                               std::pair<std::string, std::string>("pe", "ぺ"),
                                                                               std::pair<std::string, std::string>("po", "ぽ")}) {}
} // namespace sounds
} // namespace hiragana
} // namespace japanese