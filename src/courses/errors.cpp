#include <iostream>
#include <utils.h>

void LOVE(){
    log("U REALLY THINK LOVE DOES NOT EXIST IN THIS WORLD? :(", 31);
    log("I HATE YOU REVENGE IS COMING FROM LOVE PRESS ANY THING <3", 31);
    std::cin.ignore();
    for (int i = 0; i < 10; i++)
    {
        log("HEAP HEAP", 31);
        log("HEAP HEAP", 32);
    }
    int * a = new int[10];
    a[200000000000] = 12;
}
void errorsExampleList(){
    log("Here are some examples of ErrorHandeling types: \n", 34);
    log("1. first err", 31);
    log("2. second err", 31);
    log("0. exit to home page.");
}
void firstErr (){
    log("in this example we will get linker error cuz we are calling LOVE function but there is no LOVE :(", 33);
    log("the function is declared but not defined!!! if we dont declare it we get compiler error: /",32 );
    log("press any key to get error : (",32);
    std::cin.ignore();
    LOVE();
}
void secondErr (){
    log("in this example we will get Logical error cuz we want to caculate a rectangle perimeter but we are using wrong mathematical operations :()", 33);
    log("the correct mathmatical for this is (a + b) * 2 no a + b * 2",32 );
    unsigned int a, b;
    std::cout << "enter the a: ";
    std::cin >> a;
    std::cout << "enter the b: ";
    std::cin >> b;
    log("the perimeter is: " + std::to_string(a + b * 2), 32);
    log("but the correct answer is so its a logical error :D: " + std::to_string((a + b) * 2), 32);
}
void errors()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/errors/errors.txt");
    }

    log("So now we assume that you learned the errors Course now lets see real life examples.", 33);
    errorsExampleList();
    while (true)
    {
        updateConsole("/home/bardia/errors");
        std::cin >> input;
        if (input == "1")
        {
            firstErr();
        }
        else if (input == "2")
        {
            secondErr();
        }
        else if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}