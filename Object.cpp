/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** Object
*/

#include "Object.hpp"
#include <iostream>

Object::Object(std::string const& name) : _name(name) {}

Object::~Object() {}

Object* Object::getContent() const
{
    std::cerr << "[ERROR] Function getContent does not exist" << std::endl;
    return (nullptr);
}

void Object::openMe()
{
    std::cerr << "[ERROR] Function openMe does not exist" << std::endl;
}

bool Object::isOpen() const
{
    std::cerr << "[ERROR] Function isOpen does not exist" << std::endl;
    return (false);
}

void Object::closeMe()
{
    std::cerr << "[ERROR] Function closeMe does not exist" << std::endl;
}

bool Object::wrapMeThat(Object *)
{
    std::cerr << "[ERROR] Function wrapMeThat does not exist" << std::endl;
    return (false);
}

void Object::setContent(Object *)
{
    std::cerr << "[ERROR] Function setContent does not exist" << std::endl;
}

bool Object::is_Wrapped()
{
    std::cerr << "[ERROR] Function wrapMeThat does not exist" << std::endl;
    return (false);
}