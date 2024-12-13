#pragma once
#include "IPerson.h"
#include <iostream>
#include <string>
using namespace std;

class Student : public IPerson {
public:
    Student(string name, int grade);
    ~Student();

    void display();

private:
    int _grade;
};