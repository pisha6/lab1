#include <iostream>
#include "Cat.h"
#include "Sphynx.h"
#include "Persian.h"

int main() {
    std::cout << "\nCats\n" << std::endl;
    Sphynx* sphynx = new Sphynx("Sphynx1", 3, 38.5, 9);
    Persian* persian = new Persian("Persian1", 5, 12.5, "low");
    Persian* persian2 = new Persian("Persian1", 5, 12.5, "low", 3);
    Persian* persian3 = new Persian("Persian1", 5, 12.5, "low", "asasa");

    Cat* cat[4] = {sphynx, persian, persian2, persian3};
    static_cast<Persian*>(cat[2])-> show_walk();
    
    std::cout << "\nSPHYNX\n" << std::endl;
    sphynx->eat();
    sphynx->meow();
    sphynx->sleep();
    sphynx->play();
    sphynx->print_info();
    sphynx->find_place();
    sphynx->bathe();

    std::cout << "\nPERSIAN\n" << std::endl;
    persian->eat();
    persian->meow();
    persian->sleep();
    persian->play();
    persian->print_info();
    persian->show_walk();
    persian->grooming();


    delete sphynx;
    delete persian;
}