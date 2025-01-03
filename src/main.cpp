#include "courses.h"

int main()
{
    log("Welcome to the C++ course!");
    log("Type 'help' to see the list of commands.");
    std::string command;
    void (*functions[])() = {fileTypes, errorHandeling, errors, stringFunctions, dateTime, templates, algoritm, enumeration, inlineC, insertionSort
    ,math, mergeSort, searchAlgoritms, unionC, vectors};
    int functionCount = 15;
    int flag;
    int courseFlag = 0;

        void macro();


    while (true)
    {
        updateConsole("home/bardia");
        std::getline(std::cin, command);

        if (command == "courses")
        {
            courses();
        }
        else if (command == "help")
        {
            help();
        }
        else if (command == "exit")
        {
            break;
        }
        else
        {
            flag = 0;
            for (int i = 0; i < functionCount; i++)
            {
                if (command == "nav " + std::to_string(i + 1))
                {   
                                        flag = 1;
                    if(!courseFlag){
                        log("this is first time you are navigating to a course", 33);
                        log("press ENTER to go to next page in course", 33);
                        log("and 0 to go back to home", 33);
                    }
                        
                    functions[i]();
                    courseFlag = 1;
                    break;
                }
            }
            if (flag == 0)
                log("Invalid command. Type 'help' to see the list of commands.");
        }
    }
    return 0;
}