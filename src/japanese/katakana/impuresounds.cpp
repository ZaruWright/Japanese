#include <japanese/katakana/impuresounds.hpp>

namespace japanese {
namespace katakana {

    ImpureSounds::ImpureSounds() : Katakana() {}

    ImpureSounds::ImpureSounds(std::unordered_map<std::string, std::string> characters) : Katakana(characters){}

namespace sounds {

    gSound::gSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ga", "ガ"), 
                                                                               std::pair<std::string, std::string>("gi", "ギ"),
                                                                               std::pair<std::string, std::string>("gu", "グ"),
                                                                               std::pair<std::string, std::string>("ge", "ゲ"),
                                                                               std::pair<std::string, std::string>("go", "ゴ")}) {}

    zSound::zSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("za", "ザ"), 
                                                                               std::pair<std::string, std::string>("ji", "ジ"),
                                                                               std::pair<std::string, std::string>("zu", "ズ"),
                                                                               std::pair<std::string, std::string>("ze", "ゼ"),
                                                                               std::pair<std::string, std::string>("zo", "ゾ")}) {}

    dSound::dSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("da", "ダ"), 
                                                                               std::pair<std::string, std::string>("ji", "ヂ"),
                                                                               std::pair<std::string, std::string>("zu", "ヅ"),
                                                                               std::pair<std::string, std::string>("de", "デ"),
                                                                               std::pair<std::string, std::string>("do", "ド")}) {}

    bSound::bSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ba", "バ"), 
                                                                               std::pair<std::string, std::string>("bi", "ビ"),
                                                                               std::pair<std::string, std::string>("bu", "ブ"),
                                                                               std::pair<std::string, std::string>("be", "ベ"),
                                                                               std::pair<std::string, std::string>("bo", "ボ")}) {}

    pSound::pSound() : ImpureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("pa", "パ"), 
                                                                               std::pair<std::string, std::string>("pi", "ピ"),
                                                                               std::pair<std::string, std::string>("pu", "プ"),
                                                                               std::pair<std::string, std::string>("pe", "ペ"),
                                                                               std::pair<std::string, std::string>("po", "ポ")}) {}
} // namespace sounds
} // namespace katakana
} // namespace japanese