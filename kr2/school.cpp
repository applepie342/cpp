#include "school.h"
using namespace std;

School::School() : studentCount(0), employeeCount(0), inventoryCount(0), scheduleCount(0) {}

School::~School() {
    for (int i = 0; i < studentCount; ++i) {
        delete students[i];
    }
    for (int i = 0; i < employeeCount; ++i) {
        delete employees[i];
    }
    for (int i = 0; i < inventoryCount; ++i) {
        delete inventory[i];
    }
    for (int i = 0; i < scheduleCount; ++i) {
        delete schedules[i];
    }
}

void School::addStudent(Student* student) {
    setlocale(LC_ALL, "");
    if (studentCount < MAX_STUDENTS) {
        students[studentCount++] = student;
    }
    else {
        cout << "Достигнуто максимальное количество учащихся." << endl;
    }
}

void School::addEmployee(Employee* employee) {
    setlocale(LC_ALL, "");
    if (employeeCount < MAX_EMPLOYEES) {
        employees[employeeCount++] = employee;
    }
    else {
        cout << "Достигнуто максимальное количество работников." << endl;
    }
}

void School::addInventoryItem(InventoryItem* item) {
    setlocale(LC_ALL, "");
    if (inventoryCount < MAX_INVENTORY_ITEMS) {
        inventory[inventoryCount++] = item;
    }
    else {
        cout << "Достигнуто максимальное количество инвентаря." << endl;
    }
}

void School::addSchedule(Schedule* schedule) {
    setlocale(LC_ALL, "");
    if (scheduleCount < MAX_SCHEDULES) {
        schedules[scheduleCount++] = schedule;
    }
    else {
        cout << "Достигнуто максимальное количество расписаний." << endl;
    }
}

void School::displayStudents(){
    for (int i = 0; i < studentCount; ++i) {
        students[i]->display();
    }
}

void School::displayEmployees(){
    for (int i = 0; i < employeeCount; ++i) {
        employees[i]->display();
    }
}

void School::displayInventory(){
    for (int i = 0; i < inventoryCount; ++i) {
        inventory[i]->display();
    }
}

void School::displaySchedules(){
    for (int i = 0; i < scheduleCount; ++i) {
        schedules[i]->display();
    }
}