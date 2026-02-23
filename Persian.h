#pragma once
#include <iostream>
#include "Cat.h"

class Persian : 
public Cat {
private:
    double fur_len;
    std::string activ;
public:
    Persian(std::string name, int age, double fur_len, std::string activ) 
        : Cat(name, age) {
        this->fur_len = fur_len;
        this->activ = activ;
        std::cout << "Persian cat " << name << " is created" << std::endl;
    };
    void show_walk() {
        std::cout << getName() << " practices show walk, stepping gracefully." << std::endl;
    };
    void grooming() {
        std::cout << getName() << " is at grooming - brushing its long fur." << std::endl;
    };
    void meow() override {
        std::cout << getName() << " meows gently and melodiously: meow..." << std::endl;
    }
    void play() override {
        std::cout << getName() << " plays sedately, without haste." << std::endl;
    }
    void print_info() override {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Fur length: " << fur_len << " cm"
                  << ", Activity mode: " << activ << std::endl;
    }
};