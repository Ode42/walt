#include <iostream>
#include <string>
#include <stdlib.h>

std::string checktask(std::string task) {
    if (task == "exit") {
        exit(0);
        return task;
    } else {
        return "task not recognized";
    }
    
}

void task() {
    std::string taskname;
    std::cout << "Run task: " << std::endl;
    std::cin >> taskname;
    std::cout << checktask(taskname) << std::endl;
}