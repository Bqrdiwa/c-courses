#include <iostream>
#include <utils.h>

void macroExampleLists()
{
    log("0. exit to home page.");
}




void macro()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/macro/macro.txt");
    }

    log("So now we assume that you learned the macro Course now lets see real life examples.", 33);
    macroExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/macro");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}