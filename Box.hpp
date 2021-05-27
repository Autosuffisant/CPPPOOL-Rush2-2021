/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Wrap.hpp"
#include "Toy.hpp"

class Box : public Wrap {
    public:
        Box(std::string const& name);
        ~Box();

        void closeMe() { _isOpen = false; }
        virtual bool wrapMeThat(Object *object);
};

#endif /* !BOX_HPP_ */
