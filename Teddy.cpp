/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string const& name) : Toy(name) {}

Teddy::~Teddy() {}

void Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}
