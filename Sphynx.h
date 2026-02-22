#pragma once
#include <iostream>
#include "Cat.h"

class Sphynx : 
//паблик наследование
public Cat {
private:
    double bodyTemperature;
    int affectionLevel;

public:
    //конструктор для сфинкса
    Sphynx(std::string name, int age, double bodyTemperature, int affectionLevel) 
        : Cat(name, age) {
        this->bodyTemperature = bodyTemperature;//для различ параметров
        this->affectionLevel = affectionLevel;
        std::cout << "Sphynx cat " << name << " is created" << std::endl;
    };
    //собств
    void findWarmPlace() {
        std::cout << getName() << " is looking for a warm place to get warm." << std::endl;
    };
    
    void bathe() {
        std::cout << getName() << " is bathing. Sphynx cats need regular bathing!" << std::endl;
    };
    //переопред override
    void meow() override {
        std::cout << getName() << " meows especially loud: MEEEOOOW!" << std::endl;
    }
    
    void play() override {
        std::cout << getName() << " is playing but quickly gets cold and looks for warmth." << std::endl;
    }
    
    void printInfo() override {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Body temperature: " << bodyTemperature << "C"
                  << ", Affection level: " << affectionLevel << "/10" << std::endl;
    }
};