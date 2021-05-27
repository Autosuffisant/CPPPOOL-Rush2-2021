/*
** EPITECH PROJECT, 2021
** GiftPaper
** File description:
** GiftPaper
*/

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_

#include "Wrap.hpp"

class GiftPaper : public Wrap {
    public:
        GiftPaper(std::string const& name);
        ~GiftPaper();

        void closeMe() { _isOpen = false; }
    protected:
    private:
};

#endif /* !GIFTPAPER_HPP_ */
