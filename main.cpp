#include <iostream>
#include "Cat.h"
#include "Sphynx.h"
#include "Persian.h"

int main() {
    std::cout << "\nCats\n" << std::endl;

    Sphynx* sphynx = new Sphynx("Sphynx1", 3, 38.5, 9);
    Persian* persian = new Persian("Persian1", 5, 12.5, "low");
    
    std::cout << "\nSPHYNX\n" << std::endl;

    sphynx->eat();
    sphynx->meow();
    sphynx->sleep();
    sphynx->play();
    sphynx->printInfo();
    sphynx->findWarmPlace();
    sphynx->bathe();

    std::cout << "\nPERSIAN\n" << std::endl;

    persian->eat();
    persian->meow();
    persian->sleep();
    persian->play();
    persian->printInfo();
    persian->practiceShowWalk();
    persian->grooming();

    std::cout << "\npolymorphism\n" << std::endl;

    Cat* cats[3] = {sphynx, persian, new Persian("Persian2", 2, 10.0, "medium")};
    
    for (int i = 0; i < 3; i++) {
        std::cout << "\nCat " << i+1 << " (" << cats[i]->getName() << "):" << std::endl;
        cats[i]->meow();
        cats[i]->play();
        cats[i]->printInfo();
    }

    delete sphynx;
    delete persian;
    delete cats[2];
}