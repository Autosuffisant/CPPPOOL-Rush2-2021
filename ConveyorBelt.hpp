/*
** EPITECH PROJECT, 2021
** B-CPP-300-NCY-3-1-CPPrush2-gabriel.huguenin-dumittan
** File description:
** ConveyorBelt
*/

#include "Wrap.hpp"
#include "IConveyorBelt.hpp"

#ifndef CONVEYORBELT_HPP_
#define CONVEYORBELT_HPP_

class ConveyorBelt : public IConveyorBelt
{
    public:
        ConveyorBelt();
        virtual ~ConveyorBelt();
        Object *in_button();
        void out_button();
        bool is_empty() const {return _is_empty;};
        void set_obj(Object *obj) {_CB_object = obj;};
        Object *get_obj() const {return (_CB_object);};

    protected:
        Object *_CB_object;
        bool _is_empty;
    private:
};

IConveyorBelt *createConveyorBelt();


#endif /* !CONVEYORBELT_HPP_ */
