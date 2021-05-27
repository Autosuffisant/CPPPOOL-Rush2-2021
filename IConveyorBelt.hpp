/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** IConveyorBelt
*/

#include "Object.hpp"

#ifndef ICONVEYORBELT_HPP_
#define ICONVEYORBELT_HPP_

class IConveyorBelt
{
    public:
        virtual ~IConveyorBelt(){}
        virtual bool is_empty() const = 0;
        virtual Object *in_button() = 0;
        virtual void out_button() = 0;
        virtual void set_obj(Object *) = 0;
        virtual Object *get_obj() const = 0;

    protected:
    private:
};

#endif /* !ICONVEYORBELT_HPP_ */
