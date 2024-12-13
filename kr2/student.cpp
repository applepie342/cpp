#include "student.h"
using namespace std;

Student::Student(string name, int grade) : IPerson(name), _grade(grade) {}
Student::~Student() {}

void Student::display() {
    setlocale(LC_ALL, "");
    IPerson::display();
    cout << "Класс: " << _grade << endl
        << "_______________________________" << endl;
}