#include <iostream>
#include <utils.h>

void templatesExampleList()
{
    log("Here are some examples of templates: \n", 34);
    log("1. Function Templates", 31);
    log("2. Class Templates", 31);
    log("0. exit to home page.");
}

template <typename T, typename X>
auto functionTemplate(T a, X b)
{
    return a + b;
}

template <typename T>
class User {
    public:
    T name;
        T getValue() { return name; }
};
void templateExample1(){
    log("in this example we will add two things using function templates", 33);
    log("Enter the first thing: ", 33);
    int a;
    std::cin >> a;
    log("Enter the second thing: ", 33);
    int b;
    std::cin >> b;
    log("The sum of the two numbers is: " + std::to_string(functionTemplate(a, b)), 32);
}

void templateExample2(){
    log("in this example we will create a class template");
    log("the name can b");
    log("Enter the username: ", 33);
    std::string name;
    std::cin >> name;
    User<std::string> user;
    user.name = name;
    log("The name is: " + user.getValue(), 32);
    
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