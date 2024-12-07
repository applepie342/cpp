#pragma once
#include<iostream>
#include "anyHuman.h"
#include <string>
using namespace std;
using namespace anyHuman;

class IHuman
{
public:
    //������������
    IHuman();
    IHuman(string name, string surname, int age, int weight, int height);

    //����������
    virtual ~IHuman();

    //������� � �������
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

    //������
    virtual void read();
    virtual void display();
    virtual void writeToFile() = 0;

private:
    // ����
    string _name;
    string _surname;
    int _age;
    int _weight;
    int _height;
};
