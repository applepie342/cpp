#include "adult.h"
using namespace std;

Adult::Adult(string name, string surname, int age, int weight, int height, string occupation) :
    IHuman(name, surname, age, weight, height), _occupation(correctAlpha(occupation)) {}
Adult::Adult(string occupation) : _occupation(correctAlpha(occupation)) {}
Adult::Adult() : Adult("undefined", "undefined", 0, 0, 0, "undefined") {}

Adult::~Adult() {}


//перегруженные функции
Adult Adult::operator++() {
    setHeight(getHeight() + 10);
    return *this;
}

Adult Adult::operator--() {
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

bool Adult::operator> (Adult other) {
    return this->getHeight() > other.getHeight();
}

bool Adult::operator< (Adult other) {
    return this->getHeight() < other.getHeight();
}

std::ostream& operator<<(std::ostream& output, Adult h) {
    output << "Имя: " << h.getName() << std::endl
        << "Фамилия: " << h.getSurname() << std::endl
        << "Возраст: " << h.getAge() << std::endl
        << "Вес: " << h.getWeight() << std::endl
        << "Рост: " << h.getHeight() << std::endl
        << "Профессия: " << h._occupation << std::endl
        << "_______________________________" << std::endl;
    return output;
}


void Adult::setOccupation(string occupation) {
    this->_occupation = correctAlpha(occupation);
}

string Adult::getOccupation() {
    return _occupation;
}

void Adult::display() {
    IHuman::display();
    cout << "Профессия: " << _occupation << endl
        << "__________________" << endl;
}

void Adult::read() {
    IHuman::read();
    cout << "Введите профессия: "; cin >> _occupation;
}

void Adult::writeToFile() {
    ofstream out;
    out.open("Human.txt", ios::app);
    if (out.is_open()) {
        out << "Имя: " << getName() << endl
            << "Фамилия: " << getSurname() << endl
            << "Возраст: " << getAge() << endl
            << "Вес: " << getWeight() << endl
            << "Рост: " << getHeight() << endl
            << "Профессия: " << _occupation << endl
            << "_______________________________" << endl;
    }
    out.close();
}