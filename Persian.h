#pragma once
#include <iostream>
#include "Cat.h"

class Persian : 
public Cat {
private:
    double fur_len;
    std::string activ;
    int a = 0;
    std::string s;
public:
    Persian(std::string name, int age, double fur_len, std::string activ) 
        : Cat(name, age) {
        this->fur_len = fur_len;
        this->activ = activ;
        std::cout << "Persian cat " << name << " is created" << std::endl;
    };
    Persian(std::string name, int age, double fur_len, std::string activ, int a) 
        : Cat(name, age) {
        this->fur_len = fur_len;
        this->activ = activ;
        this->a = a;
        std::cout << "Persian cat " << name << " is created" << std::endl;
    };
    Persian(std::string name, int age, double fur_len, std::string activ, std::string s) 
        : Cat(name, age) {
        this->fur_len = fur_len;
        this->activ = activ;
        this->s = s;
        std::cout << "Persian cat " << name << " is created" << std::endl;
    };
    void show_walk() {
        std::cout << getName() << " practices show walk, stepping gracefully." << std::endl;
        //практикует выставочную походку, грациозно ступая
    };
    void grooming() {
        std::cout << getName() << " is at grooming." << std::endl;
        //на груминге
    };
    void meow() override {
        std::cout << getName() << " meows gently and melodiously: meow..." << std::endl;
        //мяукает нежно и мелодично: мяу
    }
    void play() override {
        std::cout << getName() << " plays slowly, without haste." << std::endl;
        //играет медлеенно, без спешки
    }
    void print_info() override {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Fur length: " << fur_len << " cm"
                  << ", Activity mode: " << activ << std::endl;
    }//имя, возраст, длина шерсти, режим активности
};