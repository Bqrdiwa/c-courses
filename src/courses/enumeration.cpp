#include <iostream>
#include <utils.h>

void enumerationExampleLists()
{
    log("0. exit to home page.");
}




void enumeration()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/enumeration/enumeration.txt");
    }

    log("So now we assume that you learned the Enumeration Course now lets see real life examples.", 33);
    enumerationExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/enumeration");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}