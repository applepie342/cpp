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
        std::cout << "Значение роста меньше 0." << std::endl;
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
    output << "Имя: " << h.getName() << endl
        << "Фамилия: " << h.getSurname() << endl
        << "Возраст: " << h.getAge() << endl
        << "Вес: " << h.getWeight() << endl
        << "Рост: " << h.getHeight() << endl
        << "Профессия: " << h.getOccupation() << endl
        << "Школа: " << h.getSchool() << endl
        << "Хобби: " << h._hobby << endl
        << "_______________________________" << endl;
    return output;
}

void Teenager::read()
{
    IHuman::read();
    cout << "Введите професию: ";
    string occupation; cin >> occupation; setOccupation(occupation);
    cout << "Введите школу: ";
    string school; cin >> school; setSchool(school);
    cout << "Введите хобби: ";
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
        out << "Имя: " << getName() << endl
            << "Фамилия: " << getSurname() << endl
            << "Возраст: " << getAge() << endl
            << "Вес: " << getWeight() << endl
            << "Рост: " << getHeight() << endl
            << "Профессия: " << getOccupation() << endl
            << "Школа: " << getSchool() << endl
            << "Хобби: " << _hobby << endl
            << "_______________________________" << endl;
    }
    out.close();
}