#include <japanese/katakana/katakana.hpp>

namespace japanese {
namespace katakana {

    Katakana::Katakana() : _characters(){}

    Katakana::Katakana(std::unordered_map<std::string, std::string> characters) : _characters(characters){}


    Katakana::~Katakana()
    {
        _characters.clear();
    }

    std::string Katakana::getRomajiString() const
    {
        std::string romaji("[ ");
        for (auto pair : _characters)
        {
            romaji += pair.first + " ";
        }
        romaji += "]";
        return romaji;
    }

    std::string Katakana::getKatakanaString() const
    {
        std::string hiragana("[ ");
        for (auto pair : _characters)
        {
            hiragana += pair.second + " ";
        }
        hiragana += "]";
        return hiragana;
    }

    Katakana operator+(Katakana lhs, const Katakana& rhs)
    {
        for (auto pair : rhs._characters)
        {
            lhs._characters.insert(pair);
        }

        return lhs;
    }

    Katakana& Katakana::operator+=(const Katakana& rhs)
    {
        for (auto pair : rhs._characters)
        {
            _characters.insert(pair);
        }

        return *this;
    }

    unsigned int Katakana::getNumberOfCharacters() const
    {
        return _characters.size();
    }

    std::pair<std::string, std::string> Katakana::getCharacter(unsigned int position) const
    {
        auto it = _characters.begin();
        for (unsigned int i = 0; i < position; ++i)
        {
            ++it;
        }

        return *it;
    }

    Katakana& Katakana::operator=(const Katakana& rhs)
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