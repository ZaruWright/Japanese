#ifndef JAPANESE_KATAKANA_DIPHTHONGS_HPP
#define JAPANESE_KATAKANA_DIPHTHONGS_HPP

#include <japanese/katakana/katakana.hpp>

namespace japanese {
namespace katakana {

/**
* \ingroup katakana
* \brief represents the diphthongs sounds from Katakana.
*
* Diphthongs sounds from Katakana.
*/
class Diphthongs : public Katakana
{
public:
    /**
    * Default constructor
    */
    Diphthongs();

    /**
    * Constructor that takes an unorderer map of Katakana characters like std::pair("a", "ア")
    * param characters: an unorderer map.
    */
    Diphthongs(std::unordered_map<std::string, std::string> characters);
}; // class Diphthongs

namespace sounds {

/**
* \ingroup sounds
* \brief represents ky sounds from Katakana.
*
* ky sounds from Katakana.
*/
class kySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    kySound();

}; // class kySound

/**
* \ingroup sounds
* \brief represents gy sounds from Katakana.
*
* gy sounds from Katakana.
*/
class gySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    gySound();

}; // class gySound

/**
* \ingroup sounds
* \brief represents sh sounds from Katakana.
*
* sh sounds from Katakana.
*/
class shSound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    shSound();

}; // class shSound

/**
* \ingroup sounds
* \brief represents j sounds from Katakana.
*
* j sounds from Katakana.
*/
class jSound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    jSound();

}; // class jSound

/**
* \ingroup sounds
* \brief represents ch sounds from Katakana.
*
* ch sounds from Katakana.
*/
class chSound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    chSound();

}; // class chSound

/**
* \ingroup sounds
* \brief represents ny sounds from Katakana.
*
* ny sounds from Katakana.
*/
class nySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    nySound();

}; // class nySound

/**
* \ingroup sounds
* \brief represents hy sounds from Katakana.
*
* hy sounds from Katakana.
*/
class hySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    hySound();

}; // class hySound

/**
* \ingroup sounds
* \brief represents by sounds from Katakana.
*
* by sounds from Katakana.
*/
class bySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    bySound();

}; // class bySound

/**
* \ingroup sounds
* \brief represents py sounds from Katakana.
*
* py sounds from Katakana.
*/
class pySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    pySound();

}; // class pySound

/**
* \ingroup sounds
* \brief represents my sounds from Katakana.
*
* my sounds from Katakana.
*/
class mySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    mySound();

}; // class kySound

/**
* \ingroup sounds
* \brief represents ry sounds from Katakana.
*
* ry sounds from Katakana.
*/
class rySound : public Diphthongs
{
public:
    /**
    * Default constructor
    */
    rySound();

}; // class rySound

} // namespace sounds
} // namespace katakana
} // namespace japanese

#endif // JAPANESE_KATAKANA_DIPHTHONGS_HPP
