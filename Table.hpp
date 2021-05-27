/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** Table
*/

#include "ITable.hpp"

#ifndef TABLE_HPP_
#define TABLE_HPP_

class Table : public ITable
{
    public:
        Table();
        virtual ~Table();
        bool TableFiler(Object *);
        bool is_full() const;
        int nb_object() const;
        std::vector<std::string> obj_list();
        Object *get_obj();

    protected:
        Object *_objects [10];
    private:
};

ITable *createTable();

#endif /* !TABLE_HPP_ */
