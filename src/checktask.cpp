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