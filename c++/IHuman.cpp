#include "IHuman.h"
#include <iostream>
#include <cmath>
using namespace std;

//конструкторы
IHuman::IHuman() {
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = 0;
    this->_weight = 0;
    this->_height = 0;
}

//список инициализации
IHuman::IHuman(string name, string surname, int age, int weight, int height) : _name(correctAlpha(name)),
_surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _height(correctCount(height)) {}

//деструкторы
IHuman::~IHuman() {
}

//геттеры и сеттеры
void IHuman::setName(string name) {
    this->_name = correctAlpha(name);
}

string IHuman::getName() {
    return _name;
}

void IHuman::setSurname(string surname) {
    this->_surname = correctAlpha(surname);
}

string IHuman::getSurname() {
    return _surname;
}

void IHuman::setAge(int age) {
    this->_age = correctCount(age);
}

int IHuman::getAge() {
    return _age;
}

void IHuman::setWeight(int weight) {
    this->_weight = correctCount(weight);
}

int IHuman::getWeight() {
    return _weight;
}

void IHuman::setHeight(int height) {
    this->_height = correctCount(height);
}

int IHuman::getHeight() {
    return _height;
}


//методы
void IHuman::display() {
    cout << "Имя: " << _name << endl;
    cout << "Фамилия: " << _surname << endl;
    cout << "Возраст: " << _age << endl;
    cout << "Вес: " << _weight << endl;
    cout << "Рост: " << _height << endl;
}

void IHuman::read()
{
    cout << "Введите имя: "; cin >> _name;
    cout << "Введите фамилия: "; cin >> _surname;
    cout << "Введите возраст: "; cin >> _age;
    cout << "Введите вес: "; cin >> _weight;
    cout << "Введите рост: "; cin >> _height;
}

void IHuman::writeToFile() {}
