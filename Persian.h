#pragma once
#include <iostream>
#include "Cat.h"

class Persian : public Cat {
private:
    double furLength;
    std::string activityMode;

public:
    Persian(std::string name, int age, double furLength, std::string activityMode) 
        : Cat(name, age) {
        this->furLength = furLength;
        this->activityMode = activityMode;
        std::cout << "Persian cat " << name << " is created" << std::endl;
    };

    void practiceShowWalk() {
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
    
    void printInfo() override {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Fur length: " << furLength << " cm"
                  << ", Activity mode: " << activityMode << std::endl;
    }
};