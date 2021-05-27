/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** Box
*/

#include "Box.hpp"

Box::Box(std::string const& name) : Wrap(name) {}

Box::~Box() {}

bool Box::wrapMeThat(Object *object)
{
    if (isOpen() == false)
        return (false);
    return Wrap::wrapMeThat(object);
}
