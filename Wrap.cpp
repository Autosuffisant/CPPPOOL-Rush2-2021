/*
** EPITECH PROJECT, 2021
** Wrap
** File description:
** Wrap
*/

#include "Wrap.hpp"

Wrap::Wrap(std::string const& name) : Object(name), _object(nullptr), _isOpen(false), _isWrapped(false) {}

Wrap::~Wrap() {}

void Wrap::openMe()
{
    if (this->_isOpen == false) {
        this->_isOpen = true;
        this->_isWrapped = false;
    }
}

void Wrap::isTaken()
{
    std::cout << "whistles while working" << std::endl;
}

bool Wrap::wrapMeThat(Object *object)
{
    if (object == nullptr && this->_object == nullptr) {
        this->_object = object;
        std::cout << "tuuuut tuuut tuut" << std::endl;
        this->_isOpen = false;
        this->_isWrapped = true;
        return (true);
    }
    std::cerr << "[ERROR] Cannot wrap empty objects!" << std::endl;
    return (false);
}

bool Wrap::is_Wrapped()
{
    return (_isWrapped);
}