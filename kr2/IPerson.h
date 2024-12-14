#pragma once
#include <iostream>
#include <string>
using namespace std;

class IPerson {
public:
    IPerson(string name);
    virtual ~IPerson();

    virtual void display();
    
private:
    string _name;
};