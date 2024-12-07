#pragma once
#include "IHuman.h"
#include "adult.h"
#include "child.h"
using namespace std;

class Teenager : public Adult, Child
{
public:
    Teenager(string name, string surname, int age, int weight, int height, string occupation, string school, string hobby);
    Teenager();

    ~Teenager();

    void setHobby(string hobby);
    string getHobby();

    Teenager operator++();
    Teenager operator--();

    bool operator> (Teenager other);
    bool operator< (Teenager other);

    friend std::ostream& operator<< (std::ostream& output, Teenager t);

    void read();
    void display();
    void writeToFile();

private:
    string _hobby;
};
