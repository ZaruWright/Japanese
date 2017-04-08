#ifndef JAPANESE_KATAKANA_SPECIALCHARACTERS_HPP
#define JAPANESE_KATAKANA_SPECIALCHARACTERS_HPP

#include <japanese/katakana/katakana.hpp>

namespace japanese {
namespace katakana {

/**
* \ingroup katakana
* \brief represents the special characters from Katakana.
*
* Special Characters from Katakana.
*/
class SpecialCharacters : public Katakana
{
public:
    /**
    * Default constructor
    */
    SpecialCharacters();

    /**
    * Constructor that takes an unorderer map of Katakana characters like std::pair("a", "ア")
    * param characters: an unorderer map.
    */
    SpecialCharacters(std::unordered_map<std::string, std::string> characters);

}; // class ImpureSounds

namespace sounds {

/**
* \ingroup sounds
* \brief represents v sounds from Katakana.
*
* v sounds from Katakana.
*/
class vSound : public SpecialCharacters
{
public:
    /**
    * Default constructor
    */
    vSound();

}; // class kSound

/**
* \ingroup sounds
* \brief represents f sounds from Katakana.
*
* f sounds from Katakana.
*/
class fSound : public SpecialCharacters
{
public:
    /**
    * Default constructor
    */
    fSound();

}; // class sSound

/**
* \ingroup sounds
* \brief represents some specials characters from Katakana.
*
* some special characters sounds from Katakana.
*/
class LeftiesSound : public SpecialCharacters
{
public:
    /**
    * Default constructor
    */
    LeftiesSound();

}; // class LeftiesSound


} // namespace sounds
} // namespace katakana
} // namespace japanese

#endif // JAPANESE_KATAKANA_SPECIALCHARACTERS_HPP
