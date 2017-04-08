
#include <japanese/games/learnsyllabary.hpp>
#include <iostream>

namespace japanese {

    LearnSyllabary::LearnSyllabary() : _numberOfTimes(10) {}

    void LearnSyllabary::romajiGame(std::string ps1, hiragana::Hiragana hiragana) const
    {
        std::string answer;
        std::string previous("");
        std::pair<std::string, std::string> pair;

        for (unsigned int i = 0; i < _numberOfTimes; ++i)
        {
            // Not allow two same questions followed.
            do
            {
                std::srand(std::time(0)); // use current time as seed for random generator
                pair = hiragana.getCharacter(std::rand()%hiragana.getNumberOfCharacters());
            } while(pair.first == previous);
            previous = pair.first;

            // Show output a get user input.
            std::cout << ps1 << std::endl << ps1 << " Hiragana: " << pair.second << " .Romaji: ";
            std::getline(std::cin, answer);

            // Go out the app if user input is 0.
            if (answer == "0") break;

            // Check if the answer was right or not.
            if (answer == pair.first)
                std::cout << ps1 << " Awesome!" << std::endl;
            else
                std::cout << ps1 << " Too bad... The right answer was " << pair.first << std::endl;

        }
    }

    void LearnSyllabary::romajiGame(std::string ps1, katakana::Katakana katakana) const
    {
        std::string answer;
        std::string previous("");
        std::pair<std::string, std::string> pair;

        for (unsigned int i = 0; i < _numberOfTimes; ++i)
        {
            // Not allow two same questions followed.
            do
            {
                std::srand(std::time(0)); // use current time as seed for random generator
                pair = katakana.getCharacter(std::rand()%katakana.getNumberOfCharacters());
            } while(pair.first == previous);
            previous = pair.first;

            // Show output a get user input.
            std::cout << ps1 << std::endl << ps1 << " Katakana: " << pair.second << " .Romaji: ";
            std::getline(std::cin, answer);

            // Go out the app if user input is 0.
            if (answer == "0") break;

            // Check if the answer was right or not.
            if (answer == pair.first)
                std::cout << ps1 << " Awesome!" << std::endl;
            else
                std::cout << ps1 << " Too bad... The right answer was " << pair.first << std::endl;

        }
    }

    void LearnSyllabary::writingGame(std::string ps1, hiragana::Hiragana hiragana) const
    {
        std::string answer;
        std::string previous("");
        std::pair<std::string, std::string> pair;

        for (unsigned int i = 0; i < _numberOfTimes; ++i)
        {
            // Not allow two same questions followed.
            do
            {
                std::srand(std::time(0)); // use current time as seed for random generator
                pair = hiragana.getCharacter(std::rand()%hiragana.getNumberOfCharacters()); 
            } while(pair.first == previous);
            previous = pair.first;

            // Show output a get user input.
            std::cout << ps1 << std::endl << ps1 << " Romaji: " << pair.first;
            std::getline(std::cin, answer);

            // Go out the app if user input is 0.
            if (answer == "0") break;

            std::cout << ps1 << " The answer is: " << pair.second << std::endl;
        }
    }

    void LearnSyllabary::writingGame(std::string ps1, katakana::Katakana katakana) const
    {
        std::string answer;
        std::string previous("");
        std::pair<std::string, std::string> pair;

        for (unsigned int i = 0; i < _numberOfTimes; ++i)
        {
            // Not allow two same questions followed.
            do
            {
                std::srand(std::time(0)); // use current time as seed for random generator
                pair = katakana.getCharacter(std::rand()%katakana.getNumberOfCharacters()); 
            } while(pair.first == previous);
            previous = pair.first;

            // Show output a get user input.
            std::cout << ps1 << std::endl << ps1 << " Romaji: " << pair.first;
            std::getline(std::cin, answer);

            // Go out the app if user input is 0.
            if (answer == "0") break;

            std::cout << ps1 << " The answer is: " << pair.second << std::endl;
        }
    }

    void LearnSyllabary::play()
    {
        std::string answer;

        // Show title
        std::cout << titleString();
        do
        {
            // Show output and get user input.
            std::cout << mainMenuString();
            std::cin >> answer;

            if (answer == "1") hiraganaMenu(true);
            else if (answer == "2") hiraganaMenu(false);
            else if (answer == "3") katakanaMenu(true);
            else if (answer == "4") katakanaMenu(false);
            
        } while (answer != "0");
    }

    void LearnSyllabary::hiraganaMenu(bool romaji)
    {
        std::string answer;
        hiragana::Hiragana hiragana;
        bool quit;
        std::vector<std::string> tokens;

        // Clean old input
        std::cin.clear();
        std::getline(std::cin, answer);

        do
        {
            // Re-init vars
            quit = false;
            tokens.clear();
            hiragana = hiragana::Hiragana();
            
            // Show output and get user input
            std::cout << hiraganaOptionsString();
            std::getline(std::cin, answer);

            // Parse user input
            std::istringstream iss(answer);
            std::copy(std::istream_iterator<std::string>(iss),
                      std::istream_iterator<std::string>(),
                      std::back_inserter(tokens));
            for (auto token : tokens)
            {
                if (token == "0") quit = true;
                if (token == "1") hiragana += getAllHiraganaCharacters();
                if (token == "2") hiragana += getPureSoundsCharacters();
                if (token == "3") hiragana += getImpureSoundsCharacters();
                if (token == "4") hiragana += getDiphthongsSoundsCharacters();
                if (token == "5") changeNumberOfQuestions(std::string("##########"));
                if (token == "6") advancedHiraganaMenu(romaji);  
            }

            // Call hiragana game
            if (hiragana.getNumberOfCharacters() > 0)
            {
                if (romaji)
                    romajiGame(std::string("##########"),hiragana);
                else
                    writingGame(std::string("##########"),hiragana);
            }

        } while (!quit);   
    }

    void LearnSyllabary::katakanaMenu(bool romaji)
    {
        std::string answer;
        katakana::Katakana katakana;
        bool quit;
        std::vector<std::string> tokens;

        // Clean old input
        std::cin.clear();
        std::getline(std::cin, answer);

        do
        {
            // Re-init vars
            quit = false;
            tokens.clear();
            katakana = katakana::Katakana();
            
            // Show output and get user input
            std::cout << katakanaOptionsString();
            std::getline(std::cin, answer);

            // Parse user input
            std::istringstream iss(answer);
            std::copy(std::istream_iterator<std::string>(iss),
                      std::istream_iterator<std::string>(),
                      std::back_inserter(tokens));
            for (auto token : tokens)
            {
                if (token == "0") quit = true;
                if (token == "1") katakana += getAllKatakanaCharacters();
                if (token == "2") katakana += getKatakanaPureSoundsCharacters();
                if (token == "3") katakana += getKatakanaImpureSoundsCharacters();
                if (token == "4") katakana += getKatakanaDiphthongsSoundsCharacters();
                if (token == "5") katakana += getKatakanaSpecialCharactersSoundsCharacters();
                if (token == "6") changeNumberOfQuestions(std::string("##########"));
                if (token == "7") advancedKatakanaMenu(romaji);  
            }

            // Call hiragana game
            if (katakana.getNumberOfCharacters() > 0)
            {
                if (romaji)
                    romajiGame(std::string("##########"),katakana);
                else
                    writingGame(std::string("##########"),katakana);
            }

        } while (!quit);   
    }

    void LearnSyllabary::changeNumberOfQuestions(std::string ps1)
    {
        std::string answer;

        // Show output and get user input
        std::cout << ps1 << std::endl 
                  << ps1 << " Current number of questions: " << _numberOfTimes << std::endl
                  << ps1 << " Set a new number: ";  
        std::getline(std::cin, answer);

        // Set new number
        _numberOfTimes = std::atoi(answer.c_str());
    }

    void LearnSyllabary::advancedHiraganaMenu(bool romaji)
    {
        std::string answer;
        bool quit;
        hiragana::Hiragana hiragana;
        bool vocals, k, s, t, n, h, m, y, r, w;
        bool g, z, d, b, p;
        bool ky, gy, sh, j, ch, ny, hy, by, py, my, ry;
        std::vector<std::string> tokens;

        do
        {
            // re-init vars
            vocals = k = s = t = n = h = m = y = r = w = false;
            g = z = d = b = p = false;
            ky = gy = sh = j = ch = ny = hy = by = py = my = ry = false;
            quit = false;
            tokens.clear();
            hiragana = hiragana::Hiragana();

            // Show output and get user input
            std::cout << advancedHiraganaOptionsString();
            std::getline(std::cin, answer);

            // Parse user input
            std::istringstream iss(answer);
            std::copy(std::istream_iterator<std::string>(iss),
                      std::istream_iterator<std::string>(),
                      std::back_inserter(tokens));
            for (auto token : tokens)
            {
                if (token == "0") quit = true;
                if (token == "1") vocals = true;
                if (token == "2") k = true;
                if (token == "3") s = true;
                if (token == "4") t = true;
                if (token == "5") n = true;
                if (token == "6") h = true;
                if (token == "7") m = true;
                if (token == "8") y = true;
                if (token == "9") r = true;
                if (token == "10") w = true;
                if (token == "11") g = true;
                if (token == "12") z = true;
                if (token == "13") d = true;
                if (token == "14") b = true;
                if (token == "15") p = true;
                if (token == "16") ky = true;
                if (token == "17") gy = true;
                if (token == "18") sh = true;
                if (token == "19") j = true;
                if (token == "20") ch = true;
                if (token == "21") ny = true;
                if (token == "22") hy = true;
                if (token == "23") by = true;
                if (token == "24") py = true;
                if (token == "25") my = true;
                if (token == "26") ry = true;
                if (token == "27") changeNumberOfQuestions(std::string("#############"));
            }

            // Make hiragana group from user input
            hiragana = selectPureSoundsCharacters(vocals, k, s, t, n, h, m, y, r, w) +
                       selectImpureSoundsCharacters(g, z, d, b, p) + 
                       selectDiphthongsSoundsCharacters(ky, gy, sh, j, ch, ny, hy, by, py, my, ry);

            // Call hirgana game
            if (hiragana.getNumberOfCharacters() > 0)
            {
                if (romaji)
                    romajiGame(std::string("#############"), hiragana);
                else
                    writingGame(std::string("#############"), hiragana);
            }

        } while (!quit); 
    }

    void LearnSyllabary::advancedKatakanaMenu(bool romaji)
    {
        std::string answer;
        bool quit;
        katakana::Katakana katakana;
        bool vocals, k, s, t, n, h, m, y, r, w;
        bool g, z, d, b, p;
        bool ky, gy, sh, j, ch, ny, hy, by, py, my, ry;
        bool v, f, lefties;
        std::vector<std::string> tokens;

        do
        {
            // re-init vars
            vocals = k = s = t = n = h = m = y = r = w = false;
            g = z = d = b = p = false;
            ky = gy = sh = j = ch = ny = hy = by = py = my = ry = false;
            v = f = lefties = false;

            quit = false;
            tokens.clear();
            katakana = katakana::Katakana();

            // Show output and get user input
            std::cout << advancedKatakanaOptionsString();
            std::getline(std::cin, answer);

            // Parse user input
            std::istringstream iss(answer);
            std::copy(std::istream_iterator<std::string>(iss),
                      std::istream_iterator<std::string>(),
                      std::back_inserter(tokens));
            for (auto token : tokens)
            {
                if (token == "0") quit = true;
                if (token == "1") vocals = true;
                if (token == "2") k = true;
                if (token == "3") s = true;
                if (token == "4") t = true;
                if (token == "5") n = true;
                if (token == "6") h = true;
                if (token == "7") m = true;
                if (token == "8") y = true;
                if (token == "9") r = true;
                if (token == "10") w = true;
                if (token == "11") g = true;
                if (token == "12") z = true;
                if (token == "13") d = true;
                if (token == "14") b = true;
                if (token == "15") p = true;
                if (token == "16") ky = true;
                if (token == "17") gy = true;
                if (token == "18") sh = true;
                if (token == "19") j = true;
                if (token == "20") ch = true;
                if (token == "21") ny = true;
                if (token == "22") hy = true;
                if (token == "23") by = true;
                if (token == "24") py = true;
                if (token == "25") my = true;
                if (token == "26") ry = true;
                if (token == "27") v = true;
                if (token == "28") f = true;
                if (token == "29") lefties = true;
                if (token == "30") changeNumberOfQuestions(std::string("#############"));
            }

            // Make katakana group from user input
            katakana = selectKatakanaPureSoundsCharacters(vocals, k, s, t, n, h, m, y, r, w) +
                       selectKatakanaImpureSoundsCharacters(g, z, d, b, p) + 
                       selectKatakanaDiphthongsSoundsCharacters(ky, gy, sh, j, ch, ny, hy, by, py, my, ry) +
                       selectKatakanaSpecialCharactersSoundsCharacters(v, f, lefties);

            // Call hirgana game
            if (katakana.getNumberOfCharacters() > 0)
            {
                if (romaji)
                    romajiGame(std::string("#############"), katakana);
                else
                    writingGame(std::string("#############"), katakana);
            }

        } while (!quit); 
    }

    hiragana::Hiragana LearnSyllabary::selectPureSoundsCharacters(bool vocals, bool k, bool s, 
                                                      bool t, bool n, bool h, bool m, 
                                                      bool y, bool r, bool w) const
    {
        hiragana::Hiragana hiragana;

        if (vocals) hiragana += hiragana::sounds::Vocals();
        if (k) hiragana += hiragana::sounds::kSound();
        if (s) hiragana += hiragana::sounds::sSound();
        if (t) hiragana += hiragana::sounds::tSound();
        if (n) hiragana += hiragana::sounds::nSound();
        if (h) hiragana += hiragana::sounds::hSound();
        if (m) hiragana += hiragana::sounds::mSound();
        if (r) hiragana += hiragana::sounds::rSound();
        if (y) hiragana += hiragana::sounds::ySound();
        if (w) hiragana += hiragana::sounds::wSound();

        return hiragana;
    }

    hiragana::Hiragana LearnSyllabary::selectImpureSoundsCharacters(bool g, bool z, bool d, 
                                                        bool b, bool p) const
    {
        hiragana::Hiragana hiragana;

        if (g) hiragana += hiragana::sounds::gSound();
        if (z) hiragana += hiragana::sounds::zSound();
        if (d) hiragana += hiragana::sounds::dSound();
        if (b) hiragana += hiragana::sounds::bSound();
        if (p) hiragana += hiragana::sounds::pSound();

        return hiragana;
    }

    hiragana::Hiragana LearnSyllabary::selectDiphthongsSoundsCharacters(bool ky, bool gy, bool sh, 
                                                            bool j, bool ch, bool ny, bool hy, 
                                                            bool by, bool py, bool my, bool ry) const
    {
        hiragana::Hiragana hiragana;

        if (ky) hiragana += hiragana::sounds::kySound();
        if (gy) hiragana += hiragana::sounds::gySound();
        if (sh) hiragana += hiragana::sounds::shSound();
        if (j)  hiragana += hiragana::sounds::jSound();
        if (ch) hiragana += hiragana::sounds::chSound();
        if (ny) hiragana += hiragana::sounds::nySound();
        if (hy) hiragana += hiragana::sounds::hySound();
        if (by) hiragana += hiragana::sounds::bySound();
        if (py) hiragana += hiragana::sounds::pySound();
        if (my) hiragana += hiragana::sounds::mySound();
        if (ry) hiragana += hiragana::sounds::rySound();

        return hiragana;
    }

    hiragana::Hiragana LearnSyllabary::getPureSoundsCharacters() const
    {
        return selectPureSoundsCharacters(true, true, true,
                                          true, true, true, true,
                                          true, true, true);
    }

    hiragana::Hiragana LearnSyllabary::getImpureSoundsCharacters() const
    {
        return selectImpureSoundsCharacters(true, true, true,
                                            true, true);
    }

    hiragana::Hiragana LearnSyllabary::getDiphthongsSoundsCharacters() const
    {
        return selectDiphthongsSoundsCharacters(true, true, true,
                                                true, true, true, true,
                                                true, true, true, true);
    }

    hiragana::Hiragana LearnSyllabary::getAllHiraganaCharacters() const
    {
        return getPureSoundsCharacters() + getImpureSoundsCharacters() + getDiphthongsSoundsCharacters();
    }

    katakana::Katakana LearnSyllabary::selectKatakanaPureSoundsCharacters(bool vocals, bool k, bool s, 
                                                      bool t, bool n, bool h, bool m, 
                                                      bool y, bool r, bool w) const
    {
        katakana::Katakana katakana;

        if (vocals) katakana += katakana::sounds::Vocals();
        if (k) katakana += katakana::sounds::kSound();
        if (s) katakana += katakana::sounds::sSound();
        if (t) katakana += katakana::sounds::tSound();
        if (n) katakana += katakana::sounds::nSound();
        if (h) katakana += katakana::sounds::hSound();
        if (m) katakana += katakana::sounds::mSound();
        if (r) katakana += katakana::sounds::rSound();
        if (y) katakana += katakana::sounds::ySound();
        if (w) katakana += katakana::sounds::wSound();

        return katakana;
    }

    katakana::Katakana LearnSyllabary::selectKatakanaImpureSoundsCharacters(bool g, bool z, bool d, 
                                                        bool b, bool p) const
    {
        katakana::Katakana katakana;

        if (g) katakana += katakana::sounds::gSound();
        if (z) katakana += katakana::sounds::zSound();
        if (d) katakana += katakana::sounds::dSound();
        if (b) katakana += katakana::sounds::bSound();
        if (p) katakana += katakana::sounds::pSound();

        return katakana;
    }

    katakana::Katakana LearnSyllabary::selectKatakanaDiphthongsSoundsCharacters(bool ky, bool gy, bool sh, 
                                                            bool j, bool ch, bool ny, bool hy, 
                                                            bool by, bool py, bool my, bool ry) const
    {
        katakana::Katakana katakana;

        if (ky) katakana += katakana::sounds::kySound();
        if (gy) katakana += katakana::sounds::gySound();
        if (sh) katakana += katakana::sounds::shSound();
        if (j)  katakana += katakana::sounds::jSound();
        if (ch) katakana += katakana::sounds::chSound();
        if (ny) katakana += katakana::sounds::nySound();
        if (hy) katakana += katakana::sounds::hySound();
        if (by) katakana += katakana::sounds::bySound();
        if (py) katakana += katakana::sounds::pySound();
        if (my) katakana += katakana::sounds::mySound();
        if (ry) katakana += katakana::sounds::rySound();

        return katakana;
    }

    katakana::Katakana LearnSyllabary::selectKatakanaSpecialCharactersSoundsCharacters(bool v, bool f, bool lefties) const
    {
        katakana::Katakana katakana;

        if (v) katakana += katakana::sounds::vSound();
        if (f) katakana += katakana::sounds::fSound();
        if (lefties) katakana += katakana::sounds::LeftiesSound();

        return katakana;
    }

    katakana::Katakana LearnSyllabary::getKatakanaPureSoundsCharacters() const
    {
        return selectKatakanaPureSoundsCharacters(true, true, true,
                                          true, true, true, true,
                                          true, true, true);
    }

    katakana::Katakana LearnSyllabary::getKatakanaImpureSoundsCharacters() const
    {
        return selectKatakanaImpureSoundsCharacters(true, true, true,
                                            true, true);
    }

    katakana::Katakana LearnSyllabary::getKatakanaDiphthongsSoundsCharacters() const
    {
        return selectKatakanaDiphthongsSoundsCharacters(true, true, true,
                                                true, true, true, true,
                                                true, true, true, true);
    }

    katakana::Katakana LearnSyllabary::getKatakanaSpecialCharactersSoundsCharacters() const
    {
        return selectKatakanaSpecialCharactersSoundsCharacters(true, true, true);
    }

    katakana::Katakana LearnSyllabary::getAllKatakanaCharacters() const
    {
        return getKatakanaPureSoundsCharacters() + getKatakanaImpureSoundsCharacters() + getKatakanaDiphthongsSoundsCharacters() + getKatakanaSpecialCharactersSoundsCharacters();
    }

    std::string LearnSyllabary::titleString() const
    {
        return std::string(
        "###############################################\n"
        "##             ¡Syllabary Battle!           ##\n"
        "###############################################\n"
        "#######################################\n"
        "#############################\n"
        "###################\n"
        "##########\n"
        );
    }

    std::string LearnSyllabary::mainMenuString() const
    {
        return std::string(
        "####\n"
        "####\n"
        "#### 0. Exit from game.\n"
        "#### 1. Learn hiraganas with romaji.\n"
        "#### 2. Learn hiraganas writing on your notebook.\n"
        "#### 3. Learn katakanas with romaji.\n"
        "#### 4. Learn katakanas writing on your notebook.\n"
        "####\n"
        "####\n"
        "#### > "
        );
    }

    std::string LearnSyllabary::hiraganaOptionsString() const
    {
        return std::string(
        "######\n"
        "######\n"
        "###### 0. Return to main menu.\n"
        "###### 1. All hiraganas.\n"
        "###### 2. Pure sounds.\n"
        "###### 3. Impure sounds.\n"
        "###### 4. Diphthongs.\n"
        "###### 5. Change number of questions.\n"
        "###### 6. Advanced options.\n"
        "###### Tip. You can concatenate various options like this. > 2 3.\n"
        "######\n"
        "######\n"
        "###### > "
        );
    }

    std::string LearnSyllabary::advancedHiraganaOptionsString() const
    {
        return std::string(
        "##########\n"
        "##########\n"
        "##########  Pure Sounds   Impure Sounds   Diphthongs \n"
        "########## ------------  --------------  ------------\n"
        "########## 0. Go back.    11. gSound.    16. kySound.\n"
        "########## 1. vocals.     12. zSound.    17. gySound.\n"
        "########## 2. kSound.     13. dSound.    18. shSound.\n"
        "########## 3. sSound.     14. bSound.    19. jSound. \n"
        "########## 4. tSound.     15. pSound.    20. chSound.\n"
        "########## 5. nSound.                    21. nySound.\n"
        "########## 6. hSound.                    22. hySound.\n"
        "########## 7. mSound.                    23. bySound.\n"
        "########## 8. ySound.                    24. pySound.\n"
        "########## 9. rSound.                    25. mySound.\n"
        "########## 10. wSound.                   26. rySound.\n"
        "##########\n"
        "########## 27. Change number of questions.\n"
        "########## Tip. You can concatenate various options like this. > 20 5 9.\n"
        "##########\n"
        "##########\n"
        "########## > "
        );
    }

    std::string LearnSyllabary::katakanaOptionsString() const
    {
        return std::string(
        "######\n"
        "######\n"
        "###### 0. Return to main menu.\n"
        "###### 1. All hiraganas.\n"
        "###### 2. Pure sounds.\n"
        "###### 3. Impure sounds.\n"
        "###### 4. Diphthongs.\n"
        "###### 5. Special characters.\n"
        "###### 6. Change number of questions.\n"
        "###### 7. Advanced options.\n"
        "###### Tip. You can concatenate various options like this. > 2 3.\n"
        "######\n"
        "######\n"
        "###### > "
        );
    }

    std::string LearnSyllabary::advancedKatakanaOptionsString() const
    {
        return std::string(
        "##########\n"
        "##########\n"
        "##########  Pure Sounds   Impure Sounds   Diphthongs   Special characters\n"
        "########## ------------  --------------  -----------   ------------------\n"
        "########## 0. Go back.    11. gSound.    16. kySound.  27. vSound.\n"
        "########## 1. vocals.     12. zSound.    17. gySound.  28. fSound.\n"
        "########## 2. kSound.     13. dSound.    18. shSound.  29. ExtraSounds.\n"
        "########## 3. sSound.     14. bSound.    19. jSound. \n"
        "########## 4. tSound.     15. pSound.    20. chSound.\n"
        "########## 5. nSound.                    21. nySound.\n"
        "########## 6. hSound.                    22. hySound.\n"
        "########## 7. mSound.                    23. bySound.\n"
        "########## 8. ySound.                    24. pySound.\n"
        "########## 9. rSound.                    25. mySound.\n"
        "########## 10. wSound.                   26. rySound.\n"
        "##########\n"
        "########## 30. Change number of questions.\n"
        "########## Tip. You can concatenate various options like this. > 20 5 9.\n"
        "##########\n"
        "##########\n"
        "########## > "
        );
    }

} // namespace japanese