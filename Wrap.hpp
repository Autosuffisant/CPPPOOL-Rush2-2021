/*
** EPITECH PROJECT, 2021
** Wrap
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"

class Wrap : public Object {
    public:
        Wrap(std::string const& name);
        virtual ~Wrap();

        void setContent(Object *object) { _object = object; }
        Object* getContent() const { return (_object); }
        bool isOpen() const { return (_isOpen); }
        virtual void isTaken();
        virtual bool wrapMeThat(Object *object);
        virtual void openMe();
        bool is_Wrapped();

    protected:
        bool _isWrapped;
        bool _isOpen;
        Object* _object;
};

#endif /* !WRAP_HPP_ */
