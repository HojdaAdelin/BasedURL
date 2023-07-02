#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>
#include "../Include/include.h"

HANDLE colorView = GetStdHandle(STD_OUTPUT_HANDLE);

void ViewURL() {

    std::string line;
    int line_number = 1;

    std::ifstream read("config.cfg");

    while (std::getline(read, line))
    {
        SetConsoleTextAttribute(colorView, 2);
        std::cout << line_number << ".";
        SetConsoleTextAttribute(colorView, 15);
        std::cout << " " << line << "\n";
        line_number++;
    }
    
    read.close();
    std::cout << "\n";

}