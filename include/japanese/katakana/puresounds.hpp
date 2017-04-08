#ifndef JAPANESE_KATAKANA_PURESOUNDS_HPP
#define JAPANESE_KATAKANA_PURESOUNDS_HPP

#include <japanese/katakana/katakana.hpp>

namespace japanese {
namespace katakana {

/**
* \ingroup katakana
* \brief represents the pure sounds from Katakana.
*
* Pure sounds from Katakana.
*/
class PureSounds : public Katakana
{
public:
    /**
    * Default constructor
    */
    PureSounds();

    /**
    * Constructor that takes an unorderer map of Katakana characters like std::pair("a", "ア")
    * param characters: an unorderer map.
    */
    PureSounds(std::unordered_map<std::string, std::string> characters);

}; // class ImpureSounds

namespace sounds {

/**
* \ingroup sounds
* \brief represents the vocals from Katakana.
*
* Vocals from Katakana.
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
* \brief represents k sounds from Katakana.
*
* k sounds from Katakana.
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
* \brief represents s sounds from Katakana.
*
* s sounds from Katakana.
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
* \brief represents t sounds from Katakana.
*
* t sounds from Katakana.
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
* \brief represents n sounds from Katakana.
*
* n sounds from Katakana.
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
* \brief represents h sounds from Katakana.
*
* h sounds from Katakana.
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
* \brief represents m sounds from Katakana.
*
* m sounds from Katakana.
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
* \brief represents y sounds from Katakana.
*
* y sounds from Katakana.
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
* \brief represents r sounds from Katakana.
*
* r sounds from Katakana.
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
* \brief represents w sounds from Katakana.
*
* w sounds from Katakana.
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
} // namespace katakana
} // namespace japanese

#endif // JAPANESE_KATAKANA_PURESOUNDS_HPP
