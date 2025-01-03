#include <iostream>
#include <utils.h>

void vectorsExampleLists()
{
    log("0. exit to home page.");
}




void vectors()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/vectors/vectors.txt");
    }

    log("So now we assume that you learned the vectors Course now lets see real life examples.", 33);
   vectorsExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/vectors");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}