/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object {
    public:
        Toy(std::string const& name);
        virtual ~Toy();
};

#endif /* !TOY_HPP_ */
