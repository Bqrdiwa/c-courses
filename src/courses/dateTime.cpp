#include <utils.h>
#include <chrono>

void dateTimeFunctionsExampleList()
{
    log("Here are some examples of DateTime functions: \n", 34);
    log("1. Measuring Time Intervals", 31);
    log("2. Getting the Current Time", 31);
    log("3. Time Duration", 31);
    log("4. Converting Between Time Units", 31);
    log("5. Adding and Subtracting Durations");
    log("0. exit to home page.");
}

void MesuringTimeIntervals()
{
    log("in this example we will measure the time interval of a code block", 33);
    int number;
    std::cout << "Enter a number to count to from 0: ";
    std::cin >> number;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < number; i++)
        ;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    log("The time interval is: " + std::to_string(duration.count()) + " seconds", 32);
}

void GettingTheCurrentTime()
{
    log("in this example we will get the current time", 33);
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    log("The current time is: ", 32);
    std::cout << std::ctime(&now_c);
}

void TimeDuration()
{
    log("in this example we will get the time duration in seconds and milliseconds", 33);
    int seconds, miliseconds;
    std::cout << "Enter the seconds (like 60): ";
    std::cin >> seconds;
    std::cout << "Enter the milliseconds (like 12): ";
    std::cin >> miliseconds;
    std::chrono::seconds sec(seconds);
    std::chrono::milliseconds ms(miliseconds);
    std::chrono::duration<double, std::milli> duration = sec + ms;   
    log("The time duration is: " + std::to_string(duration.count()) + " milliseconds", 32);
    
}

void ConvertingBetweenTimeUnits()
{
    log("in this example we will convert the time duration to milliseconds", 33);
    auto start = std::chrono::high_resolution_clock::now();
    std::string input;
    std::cout << "press ENTER to get the time duration in milliseconds";
    std::cin.ignore();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    log("The time duration is: " + std::to_string(duration.count()) + " seconds", 32);
    log("but when we make milliseconds from it: ", 32);
    std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    log("The time duration is: " + std::to_string(ms.count()) + " milliseconds", 32);
}

void AddingAndSubtractingDurations()
{
    log("in this example we will add and subtract durations", 33);
    std::chrono::seconds sec(60);
    std::chrono::milliseconds ms(500);
    std::chrono::duration<double> duration = sec + ms;
    log("The sum of the durations is: " + std::to_string(duration.count()) + " seconds", 32);
    duration = sec - ms;
    log("The subtraction of the durations is: " + std::to_string(duration.count()) + " seconds", 32);
}


void dateTime()
{
    {
        std::string input;

        std::cout << "do you want me to teach you first (Y/n): ";
        std::getline(std::cin, input);
        if (input != "n")
        {
            renderFile("courses/assets/dateTime/dateTime.txt");
        }

        log("So now we assume that you learned the DateTime Course now lets see real life examples.", 33);
        dateTimeFunctionsExampleList();
        while (true)
        {
            updateConsole("/home/bardia/dateTime");
            std::getline(std::cin, input);
            if (input == "1")
            {
                MesuringTimeIntervals();
            }
            else if (input == "2")
            {
                GettingTheCurrentTime();
            }
            else if (input == "3")
            {
                TimeDuration();
            }
            else if (input == "4")
            {
                ConvertingBetweenTimeUnits();
            }
            else if (input == "5")
            {
                AddingAndSubtractingDurations();
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