#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>
#include "../Include/include.h"

void ViewURL() {

    std::string line;
    int line_number = 1;

    std::ifstream read("config.cfg");

    while (std::getline(read, line))
    {
        std::cout << line_number << "." << " " << line << "\n";
        line_number++;
    }
    
    read.close();
    std::cout << "\n";

}