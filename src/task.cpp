#include <iostream>
#include <string>
#include "checktask.h"

void task() {
    std::string taskname;
    std::cout << "Run task: " << std::endl;
    std::cin >> taskname;
    std::cout << checktask(taskname) << std::endl;
}