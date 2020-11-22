#include <iostream>
#include <string>
#include "checktask.h"

void task() // define task function
{
    std::string taskname;
    std::cout << "Run task: " << std::endl;
    std::cin >> taskname;                          // place input in string taskname
    std::cout << checktask(taskname) << std::endl; // run task checking function
}