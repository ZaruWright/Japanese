#ifndef JAPANESE_HIRAGANA_HIRAGANA_HPP
#define JAPANESE_HIRAGANA_HIRAGANA_HPP

#include <unordered_map>
#include <string>

namespace japanese {
namespace hiragana {

/**
* \ingroup hiragana
* \brief represents a group of Hiragana characters.
*
* Represents a group of Hiragana characters. Initially this group will contains zero characters if you initialize an Hiragana object.
* If you want to add some sounds more to the object, simply do the add operation over the hiragana object.
*/
class Hiragana
{
public:
    /**
    * Default constructor
    */
    Hiragana();

    /**
    * Constructor that takes an unorderer map of hiragana characters like std::pair("a", "あ")
    * param characters: an unorderer map.
    */
    Hiragana(std::unordered_map<std::string, std::string> characters);

    /*
    * Default destructor.
    */
    ~Hiragana();

    /**
    * Returns an string with the characters on romaji form.
    */
    std::string getRomajiString() const;
    /**
    * Returns an string with the characters on hiragana form.
    */
    std::string getHiraganaString() const;

    /**
    * Returns the number of characters that are into the group. 
    */
    unsigned int getNumberOfCharacters() const;

    /**
    * Returns the character at the position given.
    * param position: Position
    */
    std::pair<std::string, std::string> getCharacter(unsigned int position) const;

    /**
    * Allows to add between hiraganas.
    * param lhs: left hand side.
    * param rhs: right hadn side.
    */
    friend Hiragana operator+(Hiragana lhs, const Hiragana& rhs);

    /**
    * Allows to add between hiraganas.
    * param lhs: left hand side.
    * param rhs: right hadn side.
    */
    Hiragana& operator+=(const Hiragana& rhs);

    /**
     * Assignment operator. Copy the Hiragana of right hand side to 
     * the left hand side.
     * @param rhs: the right hand side of the operation.
     */
    Hiragana& operator=(const Hiragana& rhs);

protected:
    /**
    * Represents all the Hiragama characters that contains the class. You can 
    * add more adding with another hiragana sounds.
    */
    std::unordered_map<std::string, std::string> _characters;

}; // class Hiragana

} // namespace hiragana
} // namespace japanese

#endif // JAPANESE_HIRAGANA_HIRAGANA_HPP
