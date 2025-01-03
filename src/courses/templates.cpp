#include <iostream>
#include <utils.h>

void templatesExampleList()
{
    log("Here are some examples of templates: \n", 34);
    log("1. Function Templates", 31);
    log("0. exit to home page.");
}

template <typename T, typename X>
auto functionTemplate(T a, X b)
{
    return a + b;
}

    

void templateExample1(){
    log("in this example we will add two things using function templates", 33);
    char a = 'A';
    char b = 'B';
    

    log("The sum of the char-'A' and char-'B' is: " + std::to_string(functionTemplate(a, b)), 32);
    int x=12;
    double y = 12.5;
    log("The sum of the int-12 and double-12.5 is: " + std::to_string(functionTemplate(x, y)), 32);
    log("we did these all by one function!!");
}


void templates()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/templates/templates.txt");
    }

    log("So now we assume that you learned the templates Course now lets see real life examples.", 33);
    templatesExampleList();
    while (true)
    {
        updateConsole("/home/bardia/templates");
        std::cin >> input;
        if (input == "1")
        {
            templateExample1();
        }
        else if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}