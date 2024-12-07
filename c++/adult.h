#pragma once
#include <fstream>
#include "IHuman.h"
using namespace std;

class Adult : virtual public IHuman {
public:
    Adult();
    Adult(string name, string surname, int age, int weight, int height, string occupation);
    Adult(string occupation);


    //деструктор
    ~Adult();

    //перегруженные функции
    Adult operator++();
    Adult operator--();

    bool operator> (Adult other);
    bool operator< (Adult other);

    friend std::ostream& operator<< (std::ostream& output, Adult t);

    void setOccupation(string occupation);
    string getOccupation();

    void read();
    void display();
    void writeToFile();

private:
    string _occupation;
};
