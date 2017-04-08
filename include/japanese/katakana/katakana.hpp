#ifndef JAPANESE_KATAKANA_KATAKANA_HPP
#define JAPANESE_KATAKANA_KATAKANA_HPP

#include <unordered_map>
#include <string>

namespace japanese {
namespace katakana {

/**
* \ingroup katakana
* \brief represents a group of Katakana characters.
*
* Represents a group of Katakana characters. Initially this group will contains zero characters if you initialize an Katakana object.
* If you want to add some sounds more to the object, simply do the add operation over the Katakana object.
*/
class Katakana
{
public:
    /**
    * Default constructor
    */
    Katakana();

    /**
    * Constructor that takes an unorderer map of Katakana characters like std::pair("a", "あ")
    * param characters: an unorderer map.
    */
    Katakana(std::unordered_map<std::string, std::string> characters);

    /*
    * Default destructor.
    */
    ~Katakana();

    /**
    * Returns an string with the characters on romaji form.
    */
    std::string getRomajiString() const;
    /**
    * Returns an string with the characters on Katakana form.
    */
    std::string getKatakanaString() const;

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
    * Allows to add between Katakanas.
    * param lhs: left hand side.
    * param rhs: right hadn side.
    */
    friend Katakana operator+(Katakana lhs, const Katakana& rhs);

    /**
    * Allows to add between Katakanas.
    * param lhs: left hand side.
    * param rhs: right hadn side.
    */
    Katakana& operator+=(const Katakana& rhs);

    /**
     * Assignment operator. Copy the Katakana of right hand side to 
     * the left hand side.
     * @param rhs: the right hand side of the operation.
     */
    Katakana& operator=(const Katakana& rhs);

protected:
    /**
    * Represents all the Katakana characters that contains the class. You can 
    * add more adding with another Katakana sounds.
    */
    std::unordered_map<std::string, std::string> _characters;

}; // class Katakana

} // namespace katanaka
} // namespace japanese

#endif // JAPANESE_KATAKANA_KATAKANA_HPP
