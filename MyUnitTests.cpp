/*
** EPITECH PROJECT, 2021
** Cpp Pool Rush 2
** File description:
** Tests
*/

#include "MyUnitTests.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include <string>
#include "Box.hpp"
#include "Elf.hpp"
#include "GiftPaper.hpp"

Object **MyUnitTests()
{
    Object **test_return = new Object*[2];

    test_return[0] = new LittlePony("little pony");
    test_return[1] = new Teddy("cuddles");

    std::cout << test_return[0]->getName() << std::endl;
    std::cout << test_return[1]->getName() << std::endl;

    return test_return;
}

Object *MyUnitTests(Object **objects)
{
    Elf worker();

    std::cout << "// Testing if a teddy can be put in a box and wrapped in a giftpaper //"
    << std::endl;
    if (!objects[1]->isOpen())
        objects[1]->openMe();
    objects[1]->wrapMeThat(objects[0]);
    objects[2]->wrapMeThat(objects[1]);
    return objects[2];
}

int main()
{
    MyUnitTests();

    Object **box_test_array = new Object*[3];

    box_test_array[0] = new Teddy("Teddy");
    box_test_array[1] = new Box("Box");
    box_test_array[2] = new GiftPaper("Giftpaper");

    Object *wrapped_gift = MyUnitTests(box_test_array);

    std::cout << "// Checking different states of the wrapped gift //" << std::endl;
    std::cout << wrapped_gift->getName() << std::endl;
    std::cout << wrapped_gift->isOpen() << std::endl;
    std::cout << "// Opening the wrap //" << std::endl;
    wrapped_gift->openMe();
    std::cout << wrapped_gift->isOpen() << std::endl;
}
