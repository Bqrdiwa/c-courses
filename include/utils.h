#pragma once
#include <iomanip>
#include <iostream>
void log(std::string message, int color = 0, int indent = 0);
void updateConsole(std::string command);
void help();
void courses();
void emptyLine(int count = 1);
void renderFile(std::string path);