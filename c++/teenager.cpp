#include "teenager.h"
using namespace std;

Teenager::Teenager(string name, string surname, int age, int weight, int height, string occupation, string school, string hobby) :
    IHuman(name, surname, age, weight, height), Adult(occupation), Child(school), _hobby(hobby) {}
Teenager::Teenager() : Teenager("undefined", "undefined", 0, 0, 0, "undefined", "undefined", "undefined") {}
Teenager::~Teenager() {}

void Teenager::setHobby(string hobby) { this->_hobby = correctAlpha(hobby); }
string Teenager::getHobby() { return _hobby; }

Teenager Teenager::operator++() {
    setHeight(getHeight() + 10);
    return *this;
}

Teenager Teenager::operator--() {
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

bool Teenager::operator> (Teenager other) {
    return this->getHeight() > other.getHeight();
}

bool Teenager::operator< (Teenager other) {
    return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Teenager h) {
    output << "���: " << h.getName() << endl
        << "�������: " << h.getSurname() << endl
        << "�������: " << h.getAge() << endl
        << "���: " << h.getWeight() << endl
        << "����: " << h.getHeight() << endl
        << "���������: " << h.getOccupation() << endl
        << "�����: " << h.getSchool() << endl
        << "�����: " << h._hobby << endl
        << "_______________________________" << endl;
    return output;
}

void Teenager::read()
{
    IHuman::read();
    cout << "������� ��������: ";
    string occupation; cin >> occupation; setOccupation(occupation);
    cout << "������� �����: ";
    string school; cin >> school; setSchool(school);
    cout << "������� �����: ";
    string hobby; cin >> hobby; setHobby(hobby);
}
void Teenager::display()
{
    IHuman::display();
    cout << "" << getOccupation() << endl
        << "" << getSchool() << endl
        << "" << _hobby << endl;
}

void Teenager::writeToFile() {
    ofstream out;
    out.open("Human.txt", ios::app);
    if (out.is_open()) {
        out << "���: " << getName() << endl
            << "�������: " << getSurname() << endl
            << "�������: " << getAge() << endl
            << "���: " << getWeight() << endl
            << "����: " << getHeight() << endl
            << "���������: " << getOccupation() << endl
            << "�����: " << getSchool() << endl
            << "�����: " << _hobby << endl
            << "_______________________________" << endl;
    }
    out.close();
}