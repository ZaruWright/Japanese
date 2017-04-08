#ifndef JAPANESE_KATAKANA_IMPURESOUNDS_HPP
#define JAPANESE_KATAKANA_IMPURESOUNDS_HPP

#include <japanese/katakana/katakana.hpp>

namespace japanese {
namespace katakana {

/**
* \ingroup katakana
* \brief represents the impure sounds from Katakana.
*
* Impure sounds from Katakana.
*/
class ImpureSounds : public Katakana
{
public:
    /**
    * Default constructor
    */
    ImpureSounds();

    /**
    * Constructor that takes an unorderer map of Katakana characters like std::pair("a", "ア")
    * param characters: an unorderer map.
    */
    ImpureSounds(std::unordered_map<std::string, std::string> characters);
}; // class ImpureSounds

namespace sounds {

/**
* \ingroup sounds
* \brief represents g sounds from Katakana.
*
* g sounds from Katakana.
*/
class gSound : public ImpureSounds
{
public:
    /**
    * Default constructor
    */
    gSound();

}; // class gSound

/**
* \ingroup sounds
* \brief represents z sounds from Katakana.
*
* z sounds from Katakana.
*/
class zSound : public ImpureSounds
{
public:
    /**
    * Default constructor
    */
    zSound();

}; // class zSound

/**
* \ingroup sounds
* \brief represents d sounds from Katakana.
*
* d sounds from Katakana.
*/
class dSound : public ImpureSounds
{
public:
    /**
    * Default constructor
    */
    dSound();

}; // class dSound

/**
* \ingroup sounds
* \brief represents b sounds from Katakana.
*
* b sounds from Katakana.
*/
class bSound : public ImpureSounds
{
public:
    /**
    * Default constructor
    */
    bSound();

}; // class bSound

/**
* \ingroup sounds
* \brief represents p sounds from Katakana.
*
* p sounds from Katakana.
*/
class pSound : public ImpureSounds
{
public:
    /**
    * Default constructor
    */
    pSound();

}; // class pSound

} // namespace sounds
} // namespace katakana
} // namespace japanese

#endif // JAPANESE_KATAKANA_IMPURESOUNDS_HPP
