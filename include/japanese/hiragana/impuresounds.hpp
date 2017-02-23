#ifndef JAPANESE_HIRAGANA_IMPURESOUNDS_HPP
#define JAPANESE_HIRAGANA_IMPURESOUNDS_HPP

#include <japanese/hiragana/hiragana.hpp>

namespace japanese {
namespace hiragana {

/**
* \ingroup hiragana
* \brief represents the impure sounds from hiragana.
*
* Impure sounds from Hiragana.
*/
class ImpureSounds : public Hiragana
{
public:
    /**
    * Default constructor
    */
    ImpureSounds();

    /**
    * Constructor that takes an unorderer map of hiragana characters like std::pair("a", "あ")
    * param characters: an unorderer map.
    */
    ImpureSounds(std::unordered_map<std::string, std::string> characters);
}; // class ImpureSounds

namespace sounds {

/**
* \ingroup sounds
* \brief represents g sounds from hiragana.
*
* g sounds from Hiragana.
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
* \brief represents z sounds from hiragana.
*
* z sounds from Hiragana.
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
* \brief represents d sounds from hiragana.
*
* d sounds from Hiragana.
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
* \brief represents b sounds from hiragana.
*
* b sounds from Hiragana.
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
* \brief represents p sounds from hiragana.
*
* p sounds from Hiragana.
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
} // namespace hiragana
} // namespace japanese

#endif // JAPANESE_HIRAGANA_IMPURESOUNDS_HPP
