/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** TEDDY
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy {
    public:
        Teddy(std::string const& name = "Teddy");
        ~Teddy();

        virtual void isTaken();
    protected:
    private:
};

#endif /* !TEDDY_HPP_ */
