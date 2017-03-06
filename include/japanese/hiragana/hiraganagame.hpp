#ifndef JAPANESE_HIRAGANA_HIRAGANAGAME_HPP
#define JAPANESE_HIRAGANA_HIRAGANAGAME_HPP

#include <japanese/hiragana/hiragana.hpp>
#include <japanese/hiragana/puresounds.hpp>
#include <japanese/hiragana/impuresounds.hpp>
#include <japanese/hiragana/diphthongs.hpp>
#include <cstdlib>
#include <sstream>
#include <string>
#include <ctime>
#include <iterator>
#include <vector>

namespace japanese {
namespace hiragana {

/**
* \ingroup hiragana
* \brief a game to learn hiragana characters.
*
* This class represents a mini game in which you can learn the
* differents hiragana characters.
* Also with this game you can choose what sounds you want to learn,
* only vocals, pure sounds and impure sounds together etc. You can do this
* concatenating the options with a blank space on the terminal.
*/
class HiraganaGame
{
public:
    /**
    * Default constructor. Creates an hiragana game.
    */
    HiraganaGame();

    /**
    * Starts the game
    */
    void play();

private:
    /**
    * Starts the questions game.
    * param ps1: string to decorate the output
    * param hiragana: hiragana character group
    */
    void romajiGame(std::string ps1, Hiragana hiragana) const;

    /**
    * Starts the writing game. This game only give a random romaji,
    * thus you can practise the caligraphy on your notebook.
    * param ps1: string to decorate the output
    * param hiragana: hiragana character group
    */
    void hiraganaWritingGame(std::string ps1, Hiragana hiragana) const;

    /**
    * Change the number of questions that appear on the game.
    */
    void changeNumberOfQuestions(std::string ps1);

    /**
    * Logic of the main hiragana menu.
    * param romaji: Select the option that you choose. True means 
    * that you learn hiragana with romaji with the keyboard. False
    * only it will gave you random romaji syllables, thus you can 
    * practise on your notebook.
    */
    void hiraganaMenu(bool romaji);

    /**
    * Logic of the main advanced hiragana menu.
    * param romaji: Select the option that you choose. True means 
    * that you learn hiragana with romaji with the keyboard. False
    * only it will gave you random romaji syllables, thus you can 
    * practise on your notebook.
    */
    void advancedHiraganaMenu(bool romaji);

    /**
    * Return a hiragana character group that contains all hiraganas.
    */
    Hiragana getAllHiraganaCharacters() const;

    /**
    * Return a hiragana character group that contains the pure sounds.
    */
    Hiragana getPureSoundsCharacters() const;

    /**
    * Return a hiragana character group that contains the impure sounds.
    */
    Hiragana getImpureSoundsCharacters() const;

    /**
    * Return a hiragana character group that contains the diphthongs.
    */
    Hiragana getDiphthongsSoundsCharacters() const;

    /**
    * Return a custom hiragana character group that contains alls or a part
    * of character from the pure sounds. True means that will be on the group and 
    * false the opposite.
    */
    Hiragana selectPureSoundsCharacters(bool vocals, bool k, bool s, 
                                        bool t, bool n, bool h, bool m, 
                                        bool y, bool r, bool w) const;

    /**
    * Return a custom hiragana character group that contains alls or a part
    * of character from the impure sounds. True means that will be on the group and 
    * false the opposite.
    */
    Hiragana selectImpureSoundsCharacters(bool g, bool z, bool d, 
                                          bool b, bool p) const;

    /**
    * Return a custom hiragana character group that contains alls or a part
    * of character from the diphthongs. True means that will be on the group and 
    * false the opposite.
    */
    Hiragana selectDiphthongsSoundsCharacters(bool ky, bool gy, bool sh, 
                                              bool j, bool ch, bool ny, bool hy, 
                                              bool by, bool py, bool my, bool ry) const;
    
    /**
    * Returns a string that contains the title string.
    */
    std::string titleString() const;

    /**
    * Returns a string that contains the main menu string.
    */
    std::string mainMenuString() const;

    /**
    * Returns a string that contains the hiragana main menu string.
    */
    std::string hiraganaOptionsString() const;

    /**
    * Returns a string that contains the advanced hiragana main menu string.
    */
    std::string advancedHiraganaOptionsString() const;

    unsigned int _numberOfTimes;
};

} // namespace hiragana
} // namespace japanese

#endif // JAPANESE_HIRAGANA_HIRAGANAGAME_HPP