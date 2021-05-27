/*
** EPITECH PROJECT, 2021
** cpp [WSL: Ubuntu]
** File description:
** LittlePony
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy {
    public:
        LittlePony(std::string const& name = "Little Pony");
        ~LittlePony();

        virtual void isTaken();
    protected:
    private:
};

#endif /* !LITTLEPONY_HPP_ */
