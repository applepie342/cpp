#include "employee.h"
using namespace std;

Employee::Employee(string name, string position) : IPerson(name), _position(position) {}
Employee::~Employee() {}

void Employee::display() {
    setlocale(LC_ALL, "");
    IPerson::display();
    cout << "Должность: " << _position << endl
        << "_______________________________" << endl;
}