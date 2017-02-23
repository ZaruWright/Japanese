#ifndef JAPANESE_HIRAGANA_PURESOUNDS_HPP
#define JAPANESE_HIRAGANA_PURESOUNDS_HPP

#include <japanese/hiragana/hiragana.hpp>

namespace japanese {
namespace hiragana {

/**
* \ingroup hiragana
* \brief represents the pure sounds from hiragana.
*
* Pure sounds from Hiragana.
*/
class PureSounds : public Hiragana
{
public:
    /**
    * Default constructor
    */
    PureSounds();

    /**
    * Constructor that takes an unorderer map of hiragana characters like std::pair("a", "あ")
    * param characters: an unorderer map.
    */
    PureSounds(std::unordered_map<std::string, std::string> characters);

}; // class ImpureSounds

namespace sounds {

/**
* \ingroup sounds
* \brief represents the vocals from hiragana.
*
* Vocals from Hiragana.
*/
class Vocals : public PureSounds
{
public:
    /**
    * Default constructor
    */
    Vocals();

}; // class Vocals

/**
* \ingroup sounds
* \brief represents k sounds from hiragana.
*
* k sounds from Hiragana.
*/
class kSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    kSound();

}; // class kSound

/**
* \ingroup sounds
* \brief represents s sounds from hiragana.
*
* s sounds from Hiragana.
*/
class sSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    sSound();

}; // class sSound

/**
* \ingroup sounds
* \brief represents t sounds from hiragana.
*
* t sounds from Hiragana.
*/
class tSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    tSound();

}; // class tSound

/**
* \ingroup sounds
* \brief represents n sounds from hiragana.
*
* n sounds from Hiragana.
*/
class nSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    nSound();

}; // class nSound

/**
* \ingroup sounds
* \brief represents h sounds from hiragana.
*
* h sounds from Hiragana.
*/
class hSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    hSound();

}; // class hSound

/**
* \ingroup sounds
* \brief represents m sounds from hiragana.
*
* m sounds from Hiragana.
*/
class mSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    mSound();

}; // class mSound

/**
* \ingroup sounds
* \brief represents y sounds from hiragana.
*
* y sounds from Hiragana.
*/
class ySound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    ySound();

}; // class ySound

/**
* \ingroup sounds
* \brief represents r sounds from hiragana.
*
* r sounds from Hiragana.
*/
class rSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    rSound();

}; // class rSound

/**
* \ingroup sounds
* \brief represents w sounds from hiragana.
*
* w sounds from Hiragana.
*/
class wSound : public PureSounds
{
public:
    /**
    * Default constructor
    */
    wSound();

}; // class wSound

} // namespace sounds
} // namespace hiragana
} // namespace japanese

#endif // JAPANESE_HIRAGANA_PURESOUNDS_HPP
