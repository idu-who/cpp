#include <fstream>
#include <sstream>
#include <string>
#include "file_handler.h"

std::istringstream readLines(std::string file_name)
{
    // opens a file, reads data and returns it
    std::ifstream file;
    std::string line, file_string;

    file.open(file_name);
    while (std::getline(file, line))
    {
        if (!file_string.empty())
        {
            line = "\n" + line;
        }
        file_string += line;
    }
    file.close();

    std::istringstream lines(file_string);
    return lines;
}

void appendLine(std::string file_name, std::string line)
{
    // opens a file and appends a line
    std::ofstream file;

    file.open(file_name, std::ios_base::app);
    file.write(line.c_str(), line.length());
    file.close();
}
