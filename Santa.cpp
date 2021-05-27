/*
** EPITECH PROJECT, 2021
** Cpp Pool Rush2
** File description:
** SANTA CLAUS HIMSELF
*/

#include <fstream>
#include "Object.hpp"

bool checkTag(std::string content)
{
    std::string objects_list[4] = { "GiftPaper", "Box", "Little Pony", "Teddy" };

    for (int i = 0; i != 4; i++)
        if (content == objects_list[i]) {
            std::cout << content << std::endl;
            return true;
        }
    if (content.find("/") == 0)
        return true;
    else {
        std::cerr << "Santa does not know that object" << std::endl;
        return false;
    }
    return true;
}

bool getObject(std::string file)
{
    std::string buf;
    std::string object;
    std::string filestream = file;
    std::string current_tag;

    while (filestream.find(">") != -1) {
        object = filestream.substr(0, filestream.find(">"));
        object.erase(0, 1);
        if (!checkTag(object))
            return false;
        filestream.erase(0, object.size() + 2);
    }
    return true;
}

int main(int ac, char **av)
{
    unsigned int i = 1;
    char output;
    std::string file_content;

    while (av[i] != NULL) {
        file_content.clear();
        std::ifstream files(av[i], std::ios::in);
        if (!files.is_open())
            std::cerr << av[i] << ": No such file or directory" << std::endl;
        else {
            std::cout << "| Checking " << av[i] << " |" << std::endl;
            while (files.get(output))
                file_content += output;
            if (!getObject(file_content)) {
                std::cerr << "This file is wrongly written !" << std::endl;
            }
        }
        i++;
    }
    return 0;
}