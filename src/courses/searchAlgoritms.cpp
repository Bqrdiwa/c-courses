#include <iostream>
#include <utils.h>

void searchAlgoritmsExampleLists()
{
    log("0. exit to home page.");
}




void searchAlgoritms()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/searchAlgoritms/searchAlgoritms.txt");
    }

    log("So now we assume that you learned the searchAlgoritms Course now lets see real life examples.", 33);
    searchAlgoritmsExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/searchAlgoritms");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}