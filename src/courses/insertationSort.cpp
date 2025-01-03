#include <iostream>
#include <utils.h>

void insertionSortExampleLists()
{
    log("0. exit to home page.");
}




void insertionSort()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/insertionSort/insertionSort.txt");
    }

    log("So now we assume that you learned the insertionSort Course now lets see real life examples.", 33);
    insertionSortExampleLists();
    while (true)
    {
        updateConsole("/home/bardia/insertionSort");
        std::cin >> input;

        if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}