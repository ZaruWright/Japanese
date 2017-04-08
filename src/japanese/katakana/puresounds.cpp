#include <japanese/katakana/puresounds.hpp>

namespace japanese {
namespace katakana {

    PureSounds::PureSounds() : Katakana() {}

    PureSounds::PureSounds(std::unordered_map<std::string, std::string> characters) : Katakana(characters){}

namespace sounds {

    Vocals::Vocals() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("a", "ア"), 
                                                                               std::pair<std::string, std::string>("i", "イ"),
                                                                               std::pair<std::string, std::string>("u", "ウ"),
                                                                               std::pair<std::string, std::string>("e", "エ"),
                                                                               std::pair<std::string, std::string>("o", "オ")}) {}

    kSound::kSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ka", "カ"), 
                                                                               std::pair<std::string, std::string>("ki", "キ"),
                                                                               std::pair<std::string, std::string>("ku", "ク"),
                                                                               std::pair<std::string, std::string>("ke", "ケ"),
                                                                               std::pair<std::string, std::string>("ko", "コ")}) {}

    sSound::sSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("sa", "サ"), 
                                                                               std::pair<std::string, std::string>("shi", "し"),
                                                                               std::pair<std::string, std::string>("su", "ス"),
                                                                               std::pair<std::string, std::string>("se", "セ"),
                                                                               std::pair<std::string, std::string>("so", "ソ")}) {}

    tSound::tSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ta", "タ"), 
                                                                               std::pair<std::string, std::string>("chi", "チ"),
                                                                               std::pair<std::string, std::string>("tsu", "ツ"),
                                                                               std::pair<std::string, std::string>("te", "テ"),
                                                                               std::pair<std::string, std::string>("to", "ト")}) {}

    nSound::nSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("na", "ナ"), 
                                                                               std::pair<std::string, std::string>("ni", "ニ"),
                                                                               std::pair<std::string, std::string>("nu", "ヌ"),
                                                                               std::pair<std::string, std::string>("ne", "ネ"),
                                                                               std::pair<std::string, std::string>("no", "ノ"),
                                                                               std::pair<std::string, std::string>("n", "ン")}) {}

    hSound::hSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ha", "ハ"), 
                                                                               std::pair<std::string, std::string>("hi", "ヒ"),
                                                                               std::pair<std::string, std::string>("fu", "フ"),
                                                                               std::pair<std::string, std::string>("he", "ヘ"),
                                                                               std::pair<std::string, std::string>("ho", "ホ")}) {}

    mSound::mSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ma", "マ"), 
                                                                               std::pair<std::string, std::string>("mi", "ミ"),
                                                                               std::pair<std::string, std::string>("mu", "ム"),
                                                                               std::pair<std::string, std::string>("me", "メ"),
                                                                               std::pair<std::string, std::string>("mo", "モ")}) {}

    ySound::ySound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ya", "ャ"),
                                                                               std::pair<std::string, std::string>("yu", "ュ"),
                                                                               std::pair<std::string, std::string>("yo", "ョ")}) {}

    rSound::rSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ra", "ラ"), 
                                                                               std::pair<std::string, std::string>("ri", "リ"),
                                                                               std::pair<std::string, std::string>("ru", "ル"),
                                                                               std::pair<std::string, std::string>("re", "レ"),
                                                                               std::pair<std::string, std::string>("ro", "ロ")}) {}

    wSound::wSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("wa", "ワ"),
                                                                               std::pair<std::string, std::string>("wo", "ヲ")}) {}
} // namespace sounds
} // namespace katakana
} // namespace japanese