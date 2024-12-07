#pragma once
#include<iostream>
#include "anyHuman.h"
#include <string>
using namespace std;
using namespace anyHuman;

class IHuman
{
public:
    //конструкторы
    IHuman();
    IHuman(string name, string surname, int age, int weight, int height);

    //деструктор
    virtual ~IHuman();

    //геттеры и сеттеры
    void setName(string name);
    string getName();
    void setSurname(string surname);
    string getSurname();
    void setAge(int age);
    int getAge();
    void setWeight(int weight);
    int getWeight();
    void setHeight(int height);
    int getHeight();

    //методы
    virtual void read();
    virtual void display();
    virtual void writeToFile() = 0;

private:
    // поля
    string _name;
    string _surname;
    int _age;
    int _weight;
    int _height;
};
