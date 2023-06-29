#include <fstream>
#include <Windows.h>
#include <iostream>
#include <string>
#include <filesystem>
#include "../Include/include.h"

void EditURL() {

    try
    {
        system("start .");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}