/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** Elf
*/

#include "Elf.hpp"

Elf::Elf(std::string const& name) : IElf(), _name(name), _is_working(true)
{
}

Elf::~Elf()
{
}

Object *Elf::press_IN()
{
    if (checkCB() == true) {
        Object *wrap = _cb->in_button();
        return (wrap);
    }
    else
        std::cerr << "The conveyorBelt is already full" << std::endl;
    return (nullptr);
}

void Elf::press_OUT()
{
    _cb->out_button();
}

std::vector<std::string> Elf::lookTable()
{
    return (_table->obj_list());
}

void Elf::put_obj_CB(Object *obj)
{
    if (checkCB() == true)
        _cb->set_obj(obj);
    else {
        std::cerr << "the Conveyor Belt is already full" << std::endl;
    }
}

Object *Elf::take_obj_CB()
{
    Object *obj = _cb->get_obj();
    _cb->set_obj(nullptr);
    return (obj);
}


Object *Elf::take_obj_table()
{
    Object *obj = _table->get_obj();
    return (obj);
}

IElf *createElf()
{
    return (new Elf("test"));
}