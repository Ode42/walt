#include <string>
#include "programs.h" // for task functions declaration

std::string checktask(std::string task) // task checking function
{
    if (task == "exit")
    {
        exit(0);
        return task;
    }
    else if (task == "wiki")
    {
        wiki();
        return "done";
    }
    else if (task == "read")
    {
        read();
        return "done";
    }

    else
    {
        return "task not recognized";
    }
}