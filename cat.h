#pragma once
#include <string>
#include <iostream>

class Cat {
public:
    std::string name;
    int age;
    //конструктор кота
    Cat(std::string name, int age) 
        : name(name), age(age) {}
    //геттеры
    std::string getName() {
        return name;
    };
    int getAge() { return age; };

    virtual void meow() = 0;  
    //для переопределения в дочерних virtual
    virtual void eat() {
        std::cout << name << " is eating." << std::endl;
    };
    virtual void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    };
    virtual void play() {
        std::cout << name << " is playing with a ball of yarn." << std::endl;
    };
    virtual void print_info() {
        std::cout << "Name: " << name << ", Age: " << age << " years" << std::endl;
    };   
};