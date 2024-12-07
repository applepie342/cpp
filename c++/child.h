#pragma once
#include <fstream>
#include "IHuman.h"
using namespace std;

class Child : virtual public IHuman {
public:
    Child();
    Child(string name, string surname, int age, int weight, int height, string school);
    Child(string school);


    ~Child();

    Child operator++();
    Child operator--();

    bool operator> (Child other);
    bool operator< (Child other);

    friend std::ostream& operator<< (std::ostream& output, Child t);

    void setSchool(string school);
    string getSchool();

    void read();
    void display();
    void writeToFile();

private:
    string _school;
};
