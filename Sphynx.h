#pragma once
#include <iostream>
#include "Cat.h"

class Sphynx : 
//паблик наследование
public Cat {
private:
    double bodytemp;
    int lvl;
public:
    //конструктор для сфинкса
    Sphynx(std::string name, int age, double bodytemp, int lvl) 
        : Cat(name, age) {
        this->bodytemp = bodytemp;//для различ параметров
        this->lvl = lvl;
        std::cout << "Sphynx cat " << name << " is created" << std::endl;
    };
    //собств
    void find_place() {
        std::cout << getName() << " is looking for a warm place to get warm." << std::endl;
    };  
    void bathe() {
        std::cout << getName() << " is bathing." << std::endl;
    };
    //переопред override
    void meow() override {
        std::cout << getName() << " meows especially loud: MEEEOOOW!" << std::endl;
    }  
    void play() override {
        std::cout << getName() << " is playing but quickly gets cold and looks for warmth." << std::endl;
    }
    void print_info() override {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Body temperature: " << bodytemp << " C"
                  << ", Affection level: " << lvl << "/10" << std::endl;
    }
};