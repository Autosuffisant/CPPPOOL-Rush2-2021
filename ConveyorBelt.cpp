/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** ConveyorBelt
*/

#include "ConveyorBelt.hpp"

ConveyorBelt::ConveyorBelt() : _is_empty(true)
{
}

ConveyorBelt::~ConveyorBelt()
{
}

Object *ConveyorBelt::in_button()
{
    Object *wrap = new Wrap("gift");
    return (wrap);
}

void ConveyorBelt::out_button()
{
    delete _CB_object;
    _is_empty = true;
}

IConveyorBelt *createConveyorBelt()
{
    IConveyorBelt *cb = new ConveyorBelt;
    return (cb);
}