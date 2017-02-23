#ifndef JAPANESE_HIRAGANA_DIPHTHONGS_HPP
#define JAPANESE_HIRAGANA_DIPHTHONGS_HPP

#include <japanese/hiragana/hiragana.hpp>

namespace japanese {
namespace hiragana {

/**
* \ingroup hiragana
* \brief represents the diphthongs sounds from hiragana.
*
* Diphthongs sounds from Hiragana.
*/
class Diphthongs : public Hiragana
{
public:
    /**
    * Default constructor
    */
    Diphthongs();

    /**
    * Constructor that takes an unorderer map of hiragana characters like std::pair("a", "あ")
    * param characters: an unorderer map.
    */
    Diphthongs(std::unordered_map<std::string, std::string> characters);
}; // class Diphthongs

namespace sounds {

/**
* \ingroup sounds
* \brief represents ky sounds from hiragana.
*
* ky sounds from Hiragana.
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
* \brief represents gy sounds from hiragana.
*
* gy sounds from Hiragana.
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
* \brief represents sh sounds from hiragana.
*
* sh sounds from Hiragana.
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
* \brief represents j sounds from hiragana.
*
* j sounds from Hiragana.
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
* \brief represents ch sounds from hiragana.
*
* ch sounds from Hiragana.
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
* \brief represents ny sounds from hiragana.
*
* ny sounds from Hiragana.
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
* \brief represents hy sounds from hiragana.
*
* hy sounds from Hiragana.
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
* \brief represents by sounds from hiragana.
*
* by sounds from Hiragana.
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
* \brief represents py sounds from hiragana.
*
* py sounds from Hiragana.
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
* \brief represents my sounds from hiragana.
*
* my sounds from Hiragana.
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
* \brief represents ry sounds from hiragana.
*
* ry sounds from Hiragana.
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
} // namespace hiragana
} // namespace japanese

#endif // JAPANESE_HIRAGANA_DIPHTHONGS_HPP
