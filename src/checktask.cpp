#include <string>
#include "programs.h"

std::string checktask(std::string task) {
    if (task == "exit") {
        exit(0);
        return task;

    } else if (task == "wiki") {
        wiki();
        return "done";
    } 
    
    else {
        return "task not recognized";
    }
    
}