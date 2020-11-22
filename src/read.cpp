#include <iostream>
#include <fstream> // for file handling
#include <string>
#include <stdlib.h>

void read()
{
    std::string wikipath = "./src/wiki/result";
    std::string read_method;
    std::cout << "Read with 'r' or open with 'o'" << std::endl;
    std::cin >> read_method;
    if (read_method == "r")
    {
        std::string wikitext;
        std::ifstream wiki;

        wiki.open(wikipath);
        if (!wiki)
        {
            std::cerr << "Unable to open wiki result" << std::endl;
            exit(1);
        }
        while (wiki >> wikitext)
        {
            std::cout << wikitext << std::endl;
        }
    }
    else if (read_method == "o")
    {
        wikipath = "vim " + wikipath;
        const char *filepath = wikipath.c_str();
        system(filepath);
    }
}