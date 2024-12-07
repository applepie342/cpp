#include "child.h"
using namespace std;

Child::Child(string name, string surname, int age, int weight, int height, string school) :
    IHuman(name, surname, age, weight, height), _school(correctAlpha(school)) {}
Child::Child(string school) : _school(correctAlpha(school)) {}
Child::Child() : Child("undefined", "undefined", 0, 0, 0, "undefined") {}

Child::~Child() {}


//перегруженные функции
Child Child::operator++() {
    setHeight(getHeight() + 10);
    return *this;
}

Child Child::operator--() {
    if (getHeight() > 0)
    {
        setHeight(getHeight() - 10);
        return *this;
    }
    else {
        std::cout << "Значение роста меньше 0." << std::endl;
    }
    exit(0);
}

bool Child::operator> (Child other) {
    return this->getHeight() > other.getHeight();
}

bool Child::operator< (Child other) {
    return this->getHeight() < other.getHeight();
}

std::ostream& operator<<(std::ostream& output, Child h) {
    output << "Имя: " << h.getName() << std::endl
        << "Фамилия: " << h.getSurname() << std::endl
        << "Возраст: " << h.getAge() << std::endl
        << "Вес: " << h.getWeight() << std::endl
        << "Рост: " << h.getHeight() << std::endl
        << "Школа: " << h._school << std::endl
        << "_______________________________" << std::endl;
    return output;
}


void Child::setSchool(string school) {
    this->_school = correctAlpha(school);
}

string Child::getSchool() {
    return _school;
}

void Child::display() {
    IHuman::display();
    cout << "Школа: " << _school << endl
        << "__________________" << endl;
}

void Child::read() {
    IHuman::read();
    cout << "Введите школу: "; cin >> _school;
}

void Child::writeToFile() {
    ofstream out;
    out.open("Human.txt", ios::app);
    if (out.is_open()) {
        out << "Имя: " << getName() << endl
            << "Фамилия: " << getSurname() << endl
            << "Возраст: " << getAge() << endl
            << "Вес: " << getWeight() << endl
            << "Рост: " << getHeight() << endl
            << "Школа: " << _school << endl
            << "_______________________________" << endl;
    }
    out.close();
}
