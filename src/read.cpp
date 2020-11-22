#include <iostream>
#include <fstream> // for file handling
#include <string>

void read()
{
    std::string read_method;
    std::cout << "Read with 'r' or open with 'o'" << std::endl;
    std::cin >> read_method;
    if (read_method == "")
        std::string wikitext;
    std::ifstream wiki;

    wiki.open("./src/wiki/result");
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