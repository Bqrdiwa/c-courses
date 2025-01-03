#include <iostream>
#include <utils.h>

void inlineExampleLists()
{
    log("0. exit to home page.");
}




void inlineC()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/inline/inline.txt");
    }

    log("So now we assume that you learned the Inline Course now lets see real life examples.", 33);
    inlineExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/inline");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}