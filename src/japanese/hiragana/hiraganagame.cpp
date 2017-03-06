
#include <japanese/hiragana/hiraganagame.hpp>
#include <iostream>

namespace japanese {
namespace hiragana {

    HiraganaGame::HiraganaGame() : _numberOfTimes(10) {}

    void HiraganaGame::romajiGame(std::string ps1, Hiragana hiragana) const
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

    void HiraganaGame::hiraganaWritingGame(std::string ps1, Hiragana hiragana) const
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

    void HiraganaGame::play()
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
            
        } while (answer != "0");
    }

    void HiraganaGame::hiraganaMenu(bool romaji)
    {
        std::string answer;
        Hiragana hiragana;
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
            hiragana = Hiragana();
            
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
                    hiraganaWritingGame(std::string("##########"),hiragana);
            }

        } while (!quit);   
    }

    void HiraganaGame::changeNumberOfQuestions(std::string ps1)
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

    void HiraganaGame::advancedHiraganaMenu(bool romaji)
    {
        std::string answer;
        bool quit;
        Hiragana hiragana;
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
            hiragana = Hiragana();

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
                    hiraganaWritingGame(std::string("#############"), hiragana);
            }

        } while (!quit); 
    }

    Hiragana HiraganaGame::selectPureSoundsCharacters(bool vocals, bool k, bool s, 
                                                      bool t, bool n, bool h, bool m, 
                                                      bool y, bool r, bool w) const
    {
        Hiragana hiragana;

        if (vocals) hiragana += sounds::Vocals();
        if (k) hiragana += sounds::kSound();
        if (s) hiragana += sounds::sSound();
        if (t) hiragana += sounds::tSound();
        if (n) hiragana += sounds::nSound();
        if (h) hiragana += sounds::hSound();
        if (m) hiragana += sounds::mSound();
        if (r) hiragana += sounds::rSound();
        if (y) hiragana += sounds::ySound();
        if (w) hiragana += sounds::wSound();

        return hiragana;
    }

    Hiragana HiraganaGame::selectImpureSoundsCharacters(bool g, bool z, bool d, 
                                                        bool b, bool p) const
    {
        Hiragana hiragana;

        if (g) hiragana += sounds::gSound();
        if (z) hiragana += sounds::zSound();
        if (d) hiragana += sounds::dSound();
        if (b) hiragana += sounds::bSound();
        if (p) hiragana += sounds::pSound();

        return hiragana;
    }

    Hiragana HiraganaGame::selectDiphthongsSoundsCharacters(bool ky, bool gy, bool sh, 
                                                            bool j, bool ch, bool ny, bool hy, 
                                                            bool by, bool py, bool my, bool ry) const
    {
        Hiragana hiragana;

        if (ky) hiragana += sounds::kySound();
        if (gy) hiragana += sounds::gySound();
        if (sh) hiragana += sounds::shSound();
        if (j)  hiragana += sounds::jSound();
        if (ch) hiragana += sounds::chSound();
        if (ny) hiragana += sounds::nySound();
        if (hy) hiragana += sounds::hySound();
        if (by) hiragana += sounds::bySound();
        if (py) hiragana += sounds::pySound();
        if (my) hiragana += sounds::mySound();
        if (ry) hiragana += sounds::rySound();

        return hiragana;
    }

    Hiragana HiraganaGame::getPureSoundsCharacters() const
    {
        return selectPureSoundsCharacters(true, true, true,
                                          true, true, true, true,
                                          true, true, true);
    }

    Hiragana HiraganaGame::getImpureSoundsCharacters() const
    {
        return selectImpureSoundsCharacters(true, true, true,
                                            true, true);
    }

    Hiragana HiraganaGame::getDiphthongsSoundsCharacters() const
    {
        return selectDiphthongsSoundsCharacters(true, true, true,
                                                true, true, true, true,
                                                true, true, true, true);
    }

    Hiragana HiraganaGame::getAllHiraganaCharacters() const
    {
        return getPureSoundsCharacters() + getImpureSoundsCharacters() + getDiphthongsSoundsCharacters();
    }

    std::string HiraganaGame::titleString() const
    {
        return std::string(
        "###############################################\n"
        "##             ¡Hiragana Battle!             ##\n"
        "###############################################\n"
        "#######################################\n"
        "#############################\n"
        "###################\n"
        "##########\n"
        );
    }

    std::string HiraganaGame::mainMenuString() const
    {
        return std::string(
        "####\n"
        "####\n"
        "#### 0. Exit from game.\n"
        "#### 1. Learn hiraganas with romaji.\n"
        "#### 2. Learn hiraganas writing on your notebook.\n"
        "####\n"
        "####\n"
        "#### > "
        );
    }

    std::string HiraganaGame::hiraganaOptionsString() const
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

    std::string HiraganaGame::advancedHiraganaOptionsString() const
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

} // namespace hiragana
} // namespace japanese