/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** ITable
*/

#include <vector>
#include "Object.hpp"

#ifndef IWRAP_HPP_
#define IWRAP_HPP_

class ITable
{
    public:
        virtual ~ITable() {}
        virtual bool TableFiler(Object *) = 0;
        virtual bool is_full() const = 0;
        virtual int nb_object() const = 0;
        virtual std::vector<std::string> obj_list() = 0;
        virtual Object *get_obj() = 0;
};

ITable *createTable();

#endif /* !IWRAP_HPP_ */