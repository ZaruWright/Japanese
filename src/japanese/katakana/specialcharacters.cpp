#include <japanese/katakana/specialcharacters.hpp>

namespace japanese {
namespace katakana {

    SpecialCharacters::SpecialCharacters() : Katakana() {}

    SpecialCharacters::SpecialCharacters(std::unordered_map<std::string, std::string> characters) : Katakana(characters){}

namespace sounds {


    vSound::vSound() : SpecialCharacters(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("va", "ヴァ"), 
                                                                                      std::pair<std::string, std::string>("vi", "ヴィ"),
                                                                                      std::pair<std::string, std::string>("vu", "ヴゥ"),
                                                                                      std::pair<std::string, std::string>("ve", "ヴェ"),
                                                                                      std::pair<std::string, std::string>("vo", "ヴォ")}) {}

    fSound::fSound() : SpecialCharacters(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("fa", "ファ"), 
                                                                                      std::pair<std::string, std::string>("fi", "フィ"),
                                                                                      std::pair<std::string, std::string>("fe", "フェ"),
                                                                                      std::pair<std::string, std::string>("fo", "フォ")}) {}

    LeftiesSound::LeftiesSound() : SpecialCharacters(std::unordered_map<std::string, std::string>{std::pair<std::string, std::string>("du", "ドゥ"), 
                                                                                                  std::pair<std::string, std::string>("ti", "ティ"),
                                                                                                  std::pair<std::string, std::string>("she", "シェ"),
                                                                                                  std::pair<std::string, std::string>("je", "ヂェ"),
                                                                                                  std::pair<std::string, std::string>("che", "チェ")}) {}
} // namespace sounds
} // namespace katakana
} // namespace japanese