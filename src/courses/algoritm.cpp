#include <iostream>
#include <utils.h>

void algoritmExampleLists()
{
    log("0. exit to home page.");
}




void algoritm()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/algoritm/algoritm.txt");
    }

    log("So now we assume that you learned the algoritms Course now lets see real life examples.", 33);
    algoritmExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/algoritm");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}