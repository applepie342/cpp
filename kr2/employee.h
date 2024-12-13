#pragma once
#include "IPerson.h"
#include <iostream>
#include <string>
using namespace std;

class Employee : public IPerson {
public:
    Employee(string name, string position);
    ~Employee();

    void display();

private:
    string _position;
};