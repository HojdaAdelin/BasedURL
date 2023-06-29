#include <iostream>
#include <fstream>
#include <Windows.h>
#include "../Include/include.h"

HANDLE colorWrite = GetStdHandle(STD_OUTPUT_HANDLE);

void AddURL(std::string URL) {

    std::ofstream write("config.cfg", std::ios::app);

    write << URL << "\n";

    write.close();

    SetConsoleTextAttribute(colorWrite, 2);

    std::cout << URL << " was saved!" << "\n\n";
    
    SetConsoleTextAttribute(colorWrite, 15);

}