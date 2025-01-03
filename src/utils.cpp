#include <iomanip>
#include <iostream>
#include <fstream>

const int h1Color = 34;        // Blue
const int h2Color = 32;        // Green
const int h3Color = 31;        // Red
const int codeColor = 35;      // Magenta
const int highlightColor = 33; // Yellow
    
std::string colorize(std::string message, int color)
{
    // color: 0 - default, 31 - red, 32 - green, 33 - yellow, 34 - blue, 35 - magenta, 36 - cyan
    return "\033[" + std::to_string(color) + "m" + message + "\033[0m";
}
void log(std::string message, int color = 0, int indent = 0)
{
    // color: 0 - default, 31 - red, 32 - green, 33 - yellow, 34 - blue, 35 - magenta, 36 - cyan
    // Define colors for different elements

    std::cout << std::setw(indent) << colorize(message, color) << std::endl;
}
void updateConsole(std::string command)
{
    std::cout << command << "$ ";
}
void help()
{
    log("Commands:", 34);
    log("courses - list all courses", 32, 5);
    log("exit - exit the program", 32, 5);
    log("nav <int> - navigate to a course", 32, 5);
}
void courses()
{
    log("id - course name");
    log("1- FileTypes");
    log("2- ErrorHandeling");
    log("3- Errors");
    log("4- StringFunctions");
    log("5- DateTime");
    log("6- Templates");
    log("7- Algoritms");
    log("8- Enumeration");
    log("9- Inline");
    log("10- InsertionSort");
    log("11- Math");
    log("12- MergeSort");
    log("13- SearchAlgoritms");
    log("14- Union");
    log("15- Vectors");

    
    
}
int countSymbolInLine(std::string &line, char symbol)
{
    int count = 0;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == symbol)
            count++;
        else if (line[i] != ' ')
            if (count)
            {
                if (line[i] == '$')
                    line.erase(0, 1);
                break;
            }
    }
    line.erase(0, count);
    return count;
}
void emptyLine(int count = 1)
{
    for (int i = 0; i < count; i++)
        std::cout << std::endl;
}
void addLesson(std::string *&arrPointer, int oldSize)
{
    std::string *newArr = new std::string[oldSize + 1];
    for (int i = 0; i < oldSize; i++)
    {

        newArr[i] = arrPointer[i];
    }
    newArr[oldSize] = "";
    if (arrPointer != nullptr)
    {
        delete[] arrPointer;
    }
    arrPointer = newArr;
}
void clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}
void renderFile(std::string path)
{
    std::string line;
    std::string document;
    std::ifstream MyReadFile(path);
    int isTitle;
    int size = 0;

    bool isCode = false;
    int isHighlight;
    int codeCounter = 0;

    int startNotation = 0;
    int endNotation = 0;
    std::string *lessons = new std::string[size + 1];
    lessons[0] = "";
    while (getline(MyReadFile, line))
    {
        isTitle = countSymbolInLine(line, '#');
        isHighlight = countSymbolInLine(line, '*');
        codeCounter = countSymbolInLine(line, '^');
        if (!isCode)
        {
            startNotation = countSymbolInLine(line, '{');
            endNotation = countSymbolInLine(line, '}');
        }

        switch (isTitle)
        {
        case 1:
            line = colorize(line, h1Color);
            break;
        case 2:
            line = colorize(line, h2Color);
            break;
        case 3:
            line = colorize(line, h3Color);
            break;
        }
        if (codeCounter == 3)
        {
            isCode = !isCode;
        }
        if (isHighlight)
        {
            line = colorize(line, highlightColor);
        }
        if (isCode)
        {
            line = colorize(line, codeColor);
        }

        if (startNotation || endNotation)
        {
            if (startNotation)
            {
                if (startNotation == 2)
                {

                    addLesson(lessons, size + 1);
                    size++;
                    lessons[size] = "clear";
                }
                addLesson(lessons, size + 1);
                size++;
            }
        }
        else
        {

            lessons[size] += line + "\n";
        }
        isHighlight = 0;
        isTitle = 0;
        endNotation = 0;
        startNotation = 0;
    }
    MyReadFile.close();

    std::string input;
    for (int i = 0; i <= size; i++)
    {
        std::string document = lessons[i];
        if (document == "clear")
        {
            clearScreen();
            continue;
        }
        log(document);
        if (i == 0)
            continue;
        if (i == size)
        {
            break;
        }

        while (true)
        {

            std::getline(std::cin, input);
            if (input.empty())
            {
                break;
            }
            else if (input == "0")
            {
                i = size;
                break;
            }
            else
            {
                log("Invalid Command.");
            }
        }
    }
}
