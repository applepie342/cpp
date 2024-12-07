#include "IHuman.h"
#include <iostream>
#include <cmath>
using namespace std;

//������������
IHuman::IHuman() {
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = 0;
    this->_weight = 0;
    this->_height = 0;
}

//������ �������������
IHuman::IHuman(string name, string surname, int age, int weight, int height) : _name(correctAlpha(name)),
_surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _height(correctCount(height)) {}

//�����������
IHuman::~IHuman() {
}

//������� � �������
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


//������
void IHuman::display() {
    cout << "���: " << _name << endl;
    cout << "�������: " << _surname << endl;
    cout << "�������: " << _age << endl;
    cout << "���: " << _weight << endl;
    cout << "����: " << _height << endl;
}

void IHuman::read()
{
    cout << "������� ���: "; cin >> _name;
    cout << "������� �������: "; cin >> _surname;
    cout << "������� �������: "; cin >> _age;
    cout << "������� ���: "; cin >> _weight;
    cout << "������� ����: "; cin >> _height;
}

void IHuman::writeToFile() {}
