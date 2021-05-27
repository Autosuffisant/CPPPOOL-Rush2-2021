/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** Elf
*/

#include <iostream>
#include "IElf.hpp"

#ifndef ELF_HPP_
#define ELF_HPP_

class Elf : public IElf
{
    public:
        Elf(std::string const& name);
        virtual ~Elf();

        bool checkCB() const  {return _cb->is_empty();};
        bool checkTable() const {return _table->is_full();};
        Object *press_IN();
        void press_OUT();
        std::vector <std::string> lookTable();
        void setWorking(bool w) {_is_working = w;};
        void put_obj_CB(Object *);
        void put_obj_table(Object *obj) {_table->TableFiler(obj);};
        Object *take_obj_CB();
        Object *take_obj_table();

    protected:
        std::string const& _name;
        bool _is_working;
        bool _is_paper;
        bool _is_box;
        bool _is_toy;
        ITable *_table;
        IConveyorBelt *_cb;

    private:
};

IElf *createElf();

#endif /* !ELF_HPP_ */
