/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** LittlePony
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(std::string const& name) : Toy(name) {}

LittlePony::~LittlePony() {}

void LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}
