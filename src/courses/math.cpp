#include <iostream>
#include <utils.h>

void mathExampleLists()
{
    log("0. exit to home page.");
}




void math()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/math/math.txt");
    }

    log("So now we assume that you learned the math Course now lets see real life examples.", 33);
    mathExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/math");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}