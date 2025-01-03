#include <iostream>
#include <utils.h>

void mergeSortExampleLists()
{
    log("0. exit to home page.");
}




void mergeSort()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/mergeSort/mergeSort.txt");
    }

    log("So now we assume that you learned the mergeSort Course now lets see real life examples.", 33);
    mergeSortExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/mergeSort");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}