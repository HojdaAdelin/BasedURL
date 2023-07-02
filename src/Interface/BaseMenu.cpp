#include <iostream>
#include "../Include/include.h"
#include <Windows.h>

HANDLE colorMenu = GetStdHandle(STD_OUTPUT_HANDLE);

void MainMenu() {

    std::cout << "Enter a command!" << "\n";
    std::cout << "\n1. Add URL" << "\n";
    std::cout << "2. View all URL" << "\n";
    std::cout << "3. Edit ULR file" << "\n"; 

    SetConsoleTextAttribute(colorMenu, 6);
    std::cout << "\nUse 'open' for open an URL where URL is the number of the specific line ULR." << "\n";
    SetConsoleTextAttribute(colorMenu, 12);
    std::cout << "Warning: If you delete 'config.cfg' file all URL's that were saved will be removed!" << "\n\n";
   
}