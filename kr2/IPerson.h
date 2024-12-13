#pragma once
#include <iostream>
#include <string>
using namespace std;

class IPerson {
public:
    IPerson(string name);
    virtual ~IPerson();

    virtual void display(); // чисто виртуальная функция
    
private:
    string _name;
};