#include <japanese/hiragana/hiragana.hpp>

namespace japanese {
namespace hiragana {

    Hiragana::Hiragana() : _characters(){}

    Hiragana::Hiragana(std::unordered_map<std::string, std::string> characters) : _characters(characters){}


    Hiragana::~Hiragana()
    {
        _characters.clear();
    }

    std::string Hiragana::getRomajiString() const
    {
        std::string romaji("[ ");
        for (auto pair : _characters)
        {
            romaji += pair.first + " ";
        }
        romaji += "]";
        return romaji;
    }

    std::string Hiragana::getHiraganaString() const
    {
        std::string hiragana("[ ");
        for (auto pair : _characters)
        {
            hiragana += pair.second + " ";
        }
        hiragana += "]";
        return hiragana;
    }

    Hiragana operator+(Hiragana lhs, const Hiragana& rhs)
    {
        for (auto pair : rhs._characters)
        {
            lhs._characters.insert(pair);
        }

        return lhs;
    }

    Hiragana& Hiragana::operator+=(const Hiragana& rhs)
    {
        for (auto pair : rhs._characters)
        {
            _characters.insert(pair);
        }

        return *this;
    }

    unsigned int Hiragana::getNumberOfCharacters() const
    {
        return _characters.size();
    }

    std::pair<std::string, std::string> Hiragana::getCharacter(unsigned int position) const
    {
        auto it = _characters.begin();
        for (unsigned int i = 0; i < position; ++i)
        {
            ++it;
        }

        return *it;
    }

    Hiragana& Hiragana::operator=(const Hiragana& rhs)
    {
        // Erase old items
        _characters.clear();

        // copy the new elements
        for (auto pair : rhs._characters)
        {
            _characters.insert(pair);
        }

        return *this;
    }

} // namespace hiragana
} // namespace japanese