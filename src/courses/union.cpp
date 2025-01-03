#include <iostream>
#include <utils.h>

void unionExampleLists()
{
    log("0. exit to home page.");
}




void unionC()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/union/union.txt");
    }

    log("So now we assume that you learned the union Course now lets see real life examples.", 33);
    unionExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/union");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}