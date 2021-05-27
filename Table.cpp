/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** Table
*/
#include <vector>
#include "Table.hpp"

Table::Table()
{
}

Table::~Table()
{
}

bool Table::TableFiler(Object *obj)
{
    for (int i = 0; i < 10; i++) {
        if (_objects[i] == NULL) {
            _objects[i] = obj;
            return (true);
        }
    }
    std::cerr << "Table is full of object" << std::endl;
    return (false);
}

bool Table::is_full() const
{
    for (int i = 0; i < 10; i++) {
        if (_objects[i] == NULL) {
            return (false);
        }
    }
    return (true);
}

ITable *createTable()
{
    ITable *table = new Table;
    return (table);
}

int Table::nb_object() const
{
    int nb_obj = 0;

    for (; _objects[nb_obj] != nullptr; nb_obj++);
    return (nb_obj);
}

std::vector<std::string> Table::obj_list()
{
    std::vector<std::string> all_name;

    for (int i = 0; _objects[i] != nullptr; i++) {
        all_name.push_back(_objects[i]->getName());
    }
    return (all_name);
}

Object *Table::get_obj()
{
    int i;

    for (i = 0; _objects[i] != nullptr; i++) {
        if (_objects[i]->isOpen() == false && _objects[i]->getContent() != nullptr && _objects[i]->is_Wrapped() == true) {
            Object *obj = _objects[i];
            _objects[i] = nullptr;
            for (int a = i; _objects[a + 1] != nullptr; a++) {
                _objects[a] = _objects[a + 1];
                _objects[a + 1] = nullptr;
            }
            return(obj);
        }
    }
    if (_objects[0] == nullptr) {
        std::cerr << "[ERROR] No objects on the Table";
        return (nullptr);
    } else {
        Object *obj = _objects[i];
        _objects[i] = nullptr;
        return(obj);
    }
}