#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include "../Include/include.h"

HANDLE colorOpen = GetStdHandle(STD_OUTPUT_HANDLE);

void URLManager::ReadURL(const std::string& lineURL) {
    int line = std::stoi(lineURL);
    int total_line = 1;
    std::ifstream readUrl("config.cfg");

    while (std::getline(readUrl, GetLine))
    {
        if (line == total_line) {
            GetURL = GetLine;
            break;
        }
        total_line++;
    }

    readUrl.close();
}

void URLManager::OpenURL() {
    std::string command = "start " + GetURL;
    system(command.c_str());

    SetConsoleTextAttribute(colorOpen, 2);
    std::cout << GetURL << " was opened!" << "\n";
    SetConsoleTextAttribute(colorOpen, 15);

}