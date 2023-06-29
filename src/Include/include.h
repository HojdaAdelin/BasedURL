#pragma once
#include <string>

void MainMenu();
void AddURL(std::string URL);
void ViewURL();
void EditURL();

class URLManager {
public:
    void ReadURL(const std::string& lineURL);
    void OpenURL();

private:
    std::string GetURL;
    std::string GetLine;
};