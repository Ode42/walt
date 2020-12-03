#include <iostream>
#include <string>
#include <stdlib.h> // for system() function

int wiki()
{
    std::string keyword;
    std::string command = "cd src/wiki && python3 wiki.py ";
    std::cout << "Keyword: ";
    std::cin >> keyword;               // place input in keyword
    command = command + keyword;       // concate command and keyword
    const char *arg = command.c_str(); // convert command to *char because system() takes char* type argument
    system(arg);
    return 0;
}