#pragma once
#include<iostream>
#include <string>
#include "student.h"
#include "employee.h"
#include "schedule.h"
#include "inventoryItem.h"
using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_EMPLOYEES = 50;
const int MAX_INVENTORY_ITEMS = 200;
const int MAX_SCHEDULES = 100;

class School 
{
public:
    School();

    ~School();

    void addStudent(Student* student);
    void addEmployee(Employee* employee);
    void addInventoryItem(InventoryItem* item);
    void addSchedule(Schedule* schedule);
    void displayStudents();
    void displayEmployees();
    void displayInventory();
    void displaySchedules();

private:
    Student* students[MAX_STUDENTS];
    Employee* employees[MAX_EMPLOYEES];
    InventoryItem* inventory[MAX_INVENTORY_ITEMS];
    Schedule* schedules[MAX_SCHEDULES];

    int studentCount;
    int employeeCount;
    int inventoryCount;
    int scheduleCount;
};