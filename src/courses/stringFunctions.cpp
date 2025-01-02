#include <utils.h>
std::string str;
std::string helpStr;
void stringFunctionsExampleList()
{
    log("Here are some examples of string functions: \n", 34);
    log("1. string length", 31);
    log("2. string compare", 31);
    log("3. string find", 31);
    log("4. string c_str", 31);
    log("5. string append", 31);
    log("6. string replace", 31);
    log("7. string substr", 31);
    log("0. exit to home page.");
}

void getString(int two = false, std::string secondPlaceHolder= "Enter the second string: ")
{
    std::cin.ignore();
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);
    if (two)
    {
        std::cout << secondPlaceHolder;
        std::getline(std::cin, helpStr);
    }
}

void stringLength()
{
    log("in this example we will get the length of the string", 33);
    getString();
    log("The length of the string is: " + std::to_string(str.length()), 32);
}

void stringCompare()
{
    log("in this example we will compare two strings", 33);
    getString(true);
    int comp = str.compare(helpStr);
    log("so the compare function returns 0 if the strings are equal and 1 if they are not", 32);
    std::string result = str == helpStr ? "equal" : "not equal";
    log("The strings are " + result, 32);
    log("The compare function returns: " + std::to_string(str.compare(helpStr)), 32);
    if(comp){
        log("because the first string's length is greater than the second one ", 32);
    }else if(comp == -1){
        log("because the first string's length is less than the second one ", 32);
    }
    
}

void stringFind(){
    log("in this example we will find a substring in a string", 33);
    getString(true, "Enter the word to find the string: ");
    size_t found = str.find(helpStr);
    if(found != std::string::npos){
        log("the substring is found in the string", 32);
        log("the index of the substring is: " + std::to_string(found), 32);
    }else{
        log("the substring is not found in the string", 31);
    }
}

void stringCStr(){
    log("in this example we will convert a string to a c string", 33);
    getString();
    const char *cstr = str.c_str();
    log("the c string is: " + std::string(cstr), 32);
}

void stringAppend(){
    log("in this example we will append a string to another string", 33);
    getString(true, "Enter the string to append: ");
    str.append(helpStr);
    log("the appended string is: " + str, 32);
}


void stringReplace(){
    log("in this example we will replace a substring in a string", 33);
    getString(true, "Enter the word in the string that you want to replace: ");
    size_t found = str.find(helpStr);
    if(found != std::string::npos){
        log("the substring is found in the string", 32);
        log("the index of the substring is: " + std::to_string(found), 32);
        std::cout << "Enter the string to replace ot with " << helpStr<< ": ";
        std::getline(std::cin, helpStr);
        str.replace(found, helpStr.length(), helpStr);
        log("the replaced string is: " + str, 32);
    }else{
        log("the substring is not found in the string", 31);
    }
}

void stringSubstr(){
    log("in this example we will get a substring from a string", 33);
    getString();
    unsigned int start, length;
    std::cout << "Enter the start index: ";
    std::cin >> start;
    std::cout << "Enter the length of the substring: ";
    std::cin >> length;
    if(start + length > str.length()){
        log("the length of the substring is greater than the string", 31);
        return;
    }
    log("the substring is: " + str.substr(start, length), 32);
}

void stringFunctions()
{
    {
        std::string input;

        std::cout << "do you want me to teach you first (Y/n): ";
        std::getline(std::cin, input);
        if (input != "n")
        {
            renderFile("courses/assets/stringFunctions/stringFunctions.txt");
        }

        log("So now we assume that you learned the StringFunctions Course now lets see real life examples.", 33);
        stringFunctionsExampleList();
        while (true)
        {
            updateConsole("/home/bardia/stringFunctions");
            std::cin >> input;
            if (input == "1")
            {
                stringLength();
            }
            else if (input == "2")
            {
                stringCompare();
            }
            else if (input == "3")
            {
                stringFind();
            }
            else if (input == "4")
            {
                stringCStr();
            }
            else if (input == "5")
            {
                stringAppend();
            }
            else if (input == "6")
            {
                stringReplace();
            }
            else if (input == "7")
            {
                stringSubstr();
            }
            else if (input == "0")
            {
                break;
            }else{
                std::cin.ignore();
            }

        }
    }
}