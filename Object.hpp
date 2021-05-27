/*
** EPITECH PROJECT, 2021
** Object
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>

class Object {
    public:
        Object(std::string const& Name);
        virtual ~Object();

        const std::string& getName() const { return (_name); }
        virtual Object *getContent() const;

        virtual void isTaken() = 0;
        virtual bool is_Wrapped();

        virtual void openMe();
        virtual bool isOpen() const;
        virtual void closeMe();
        virtual bool wrapMeThat(Object *);
        virtual void setContent(Object *);

    protected :
        const std::string _name;

};
#endif /* !OBJECT_HPP_ */
