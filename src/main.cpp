#include <iostream>
#include "Include/include.h"
#include <Windows.h>

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {

    SetConsoleTextAttribute(color, 15);

    while (true)
    {
        
        std::string command;

        MainMenu();

        std::cin >> command;

        if (command == "1") {

            std::cout << "\n";
            std::string URL;
            std::cout << "Enter the URL: ";
            std::cin >> URL;
            std::cout << "\n";
            AddURL(URL);

        } else if (command == "2") {

            std::cout << "\n";
            ViewURL();

        } else if (command == "3") {

            std::cout << "\n";
            EditURL();

        } else if (command == "open") {


            std::string URL;
            std::cout << "\nEnter the URL line number: ";
            std::cin >> URL;
            URLManager urlManager;

            urlManager.ReadURL(URL);
            urlManager.OpenURL();

            std::cout << "\n";

        }

    } 

    return 0;

}