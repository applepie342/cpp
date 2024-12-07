#include "child.h"
using namespace std;

Child::Child(string name, string surname, int age, int weight, int height, string school) :
    IHuman(name, surname, age, weight, height), _school(correctAlpha(school)) {}
Child::Child(string school) : _school(correctAlpha(school)) {}
Child::Child() : Child("undefined", "undefined", 0, 0, 0, "undefined") {}

Child::~Child() {}


//������������� �������
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
        std::cout << "�������� ����� ������ 0." << std::endl;
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
    output << "���: " << h.getName() << std::endl
        << "�������: " << h.getSurname() << std::endl
        << "�������: " << h.getAge() << std::endl
        << "���: " << h.getWeight() << std::endl
        << "����: " << h.getHeight() << std::endl
        << "�����: " << h._school << std::endl
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
    cout << "�����: " << _school << endl
        << "__________________" << endl;
}

void Child::read() {
    IHuman::read();
    cout << "������� �����: "; cin >> _school;
}

void Child::writeToFile() {
    ofstream out;
    out.open("Human.txt", ios::app);
    if (out.is_open()) {
        out << "���: " << getName() << endl
            << "�������: " << getSurname() << endl
            << "�������: " << getAge() << endl
            << "���: " << getWeight() << endl
            << "����: " << getHeight() << endl
            << "�����: " << _school << endl
            << "_______________________________" << endl;
    }
    out.close();
}
