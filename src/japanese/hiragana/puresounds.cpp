#include <japanese/hiragana/puresounds.hpp>

namespace japanese {
namespace hiragana {

    PureSounds::PureSounds() : Hiragana() {}

    PureSounds::PureSounds(std::unordered_map<std::string, std::string> characters) : Hiragana(characters){}

namespace sounds {

    Vocals::Vocals() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("a", "あ"), 
                                                                               std::pair<std::string, std::string>("i", "い"),
                                                                               std::pair<std::string, std::string>("u", "う"),
                                                                               std::pair<std::string, std::string>("e", "え"),
                                                                               std::pair<std::string, std::string>("o", "お")}) {}

    kSound::kSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ka", "か"), 
                                                                               std::pair<std::string, std::string>("ki", "き"),
                                                                               std::pair<std::string, std::string>("ku", "く"),
                                                                               std::pair<std::string, std::string>("ke", "け"),
                                                                               std::pair<std::string, std::string>("ko", "こ")}) {}

    sSound::sSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("sa", "さ"), 
                                                                               std::pair<std::string, std::string>("shi", "し"),
                                                                               std::pair<std::string, std::string>("su", "す"),
                                                                               std::pair<std::string, std::string>("se", "せ"),
                                                                               std::pair<std::string, std::string>("so", "そ")}) {}

    tSound::tSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ta", "た"), 
                                                                               std::pair<std::string, std::string>("chi", "ち"),
                                                                               std::pair<std::string, std::string>("tsu", "つ"),
                                                                               std::pair<std::string, std::string>("te", "て"),
                                                                               std::pair<std::string, std::string>("to", "と")}) {}

    nSound::nSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("na", "な"), 
                                                                               std::pair<std::string, std::string>("ni", "に"),
                                                                               std::pair<std::string, std::string>("nu", "ぬ"),
                                                                               std::pair<std::string, std::string>("ne", "ね"),
                                                                               std::pair<std::string, std::string>("no", "の"),
                                                                               std::pair<std::string, std::string>("n", "ん")}) {}

    hSound::hSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ha", "は"), 
                                                                               std::pair<std::string, std::string>("hi", "ひ"),
                                                                               std::pair<std::string, std::string>("fu", "ふ"),
                                                                               std::pair<std::string, std::string>("he", "へ"),
                                                                               std::pair<std::string, std::string>("ho", "ほ")}) {}

    mSound::mSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ma", "ま"), 
                                                                               std::pair<std::string, std::string>("mi", "み"),
                                                                               std::pair<std::string, std::string>("mu", "む"),
                                                                               std::pair<std::string, std::string>("me", "め"),
                                                                               std::pair<std::string, std::string>("mo", "も")}) {}

    ySound::ySound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ya", "や"),
                                                                               std::pair<std::string, std::string>("yu", "ゆ"),
                                                                               std::pair<std::string, std::string>("yo", "よ")}) {}

    rSound::rSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("ra", "ら"), 
                                                                               std::pair<std::string, std::string>("ri", "り"),
                                                                               std::pair<std::string, std::string>("ru", "る"),
                                                                               std::pair<std::string, std::string>("re", "れ"),
                                                                               std::pair<std::string, std::string>("ro", "ろ")}) {}

    wSound::wSound() : PureSounds(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("wa", "わ"),
                                                                               std::pair<std::string, std::string>("(w)o", "を")}) {}
} // namespace sounds
} // namespace hiragana
} // namespace japanese