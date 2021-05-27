/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** IElf
*/

#include <ostream>
#include <fstream>
#include "Table.hpp"
#include "ConveyorBelt.hpp"

#ifndef IELF_HPP_
#define IELF_HPP_

class IElf {
    public:
        virtual ~IElf() {}
        virtual bool checkCB() const = 0;
        virtual bool checkTable() const = 0;
        virtual Object *press_IN() = 0;
        virtual void press_OUT() = 0;
        virtual std::vector <std::string> lookTable() = 0;
        virtual void setWorking(bool) = 0;
        virtual void put_obj_CB(Object *) = 0;
        virtual void put_obj_table(Object *) = 0;
        virtual Object *take_obj_CB() = 0;
        virtual Object *take_obj_table() = 0;

    protected:
    private:
};

#endif /* !IELF_HPP_ */
