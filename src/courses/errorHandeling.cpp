#include <iostream>
#include <stdexcept>
#include <utils.h>

void errorHandelingExampleList(){
    log("Here are some examples of ErrorHandeling types: \n", 34);
    log("1. first ex", 31);
    log("2. second ex", 31);
    log("0. exit to home page.");
}

void firstEx(){
    log("in this example we also going to learn a new concept");
    log("signed and unsigned integers");
    log("signed integers can be negative and positive but unsigned integers can only be positive");
    log("for signed  integer we get the most significant bit of the integer for determining its positive or negative");
    log("now we have a unsinged so we cant give it a negative value");
    log("this is exception right ? ");
    log("and in 64 bit systems it cant be more that 2 power of 64 (just for information)");

    log("so in this ex we cant give it negative number and we are going to handle it");
    signed int num;
    std::cout << "enter the unsigned number: ";
    std::cin >> num;

    try{
        if(num < 0){
            throw std::invalid_argument("it should be positive");
        }
    }catch(std::invalid_argument &e){
        std::cerr << e.what() << '\n';
    }
}

void secondEx(){
    log("give me the student code of razi university");
    log("i'll throw error if the code is invalid and if the code is not from 1403's year");
    std::string code;
    std::cout << "enter the code: ";
    std::cin >> code;
    try {
        if(code.length() != 10){
            throw std::invalid_argument("the code should be 10 characters");
        }
        if(code.substr(0, 3) != "403"){
            throw std::out_of_range("the code is not from 1403");
        }
        log("the code is valid");
    } catch (std::invalid_argument &e){
        std::cerr << e.what() << '\n';
    } catch(std::out_of_range &e){
        std::cerr << e.what() << '\n';
    }
}

void errorHandeling()
{
    std::string input;

    std::cout << "do you want me to teach you first (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/errorHandeling/errorHandeling.txt");
    }

    log("So now we assume that you learned the ErrorHandeling Course now lets see real life examples.", 33);
    errorHandelingExampleList();
    while (true)
    {
        updateConsole("/home/bardia/errorHandeling");
        std::cin >> input;
        if (input == "1")
        {
            firstEx();
        }
        else if (input == "2")
        {
            secondEx();
        }
        else if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }


    }
}