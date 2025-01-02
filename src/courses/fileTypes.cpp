#include <fstream>
#include <utils.h>

void fileTypeExampleList()
{
    log("Here are some examples of file types: \n", 34);
    log("1. Writing into a file", 31);
    log("2. Reading a file", 31);
    log("0. exit to home page.");
}

void writeToFile()
{
    std::string input;
    log("Enter the text you want to write to the file: ", 36);
    std::getline(std::cin, input);
    std::ofstream file;
    file.open("courses/assets/fileTypes/writedFile.txt");
    file << input;
    file.close();
    log("Text written to file successfully (courses/assets/fileTypes/writedFile.txt)", 32);
}

void readFromFile()
{
    std::string line;
    std::ifstream file("courses/assets/fileTypes/readedFile.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            log(line, 32);
        }
        file.close();
    }
    else
    {
        log("Unable to open file", 31);
    }
}

void fileTypes()
{
    std::string input;

    std::cout << "do you want me to teach you the actual header (Y/n): ";
    std::getline(std::cin, input);
    if (input != "n")
    {
        renderFile("courses/assets/fileTypes/fileTypes.txt");
    }

    log("So now we assume that you learned the FileTypes Course now lets see real life examples.", 33);
    fileTypeExampleList();
    while (true)
    {
        updateConsole("/home/bardia/fileTypes");
        std::getline(std::cin, input);
        if (input == "1")
        {
            writeToFile();
        }
        else if (input == "2")
        {
            readFromFile();
        }
        else if (input == "0")
        {
            break;
        }else{
                std::cin.ignore();
            }

    }
}