#include "school.h"
#include<iostream>
using namespace std;


int main() {
    School school;
    school.addStudent(new Student("Евгений", 10));
    school.addStudent(new Student("Елизавета", 9));

    // Добавление сотрудников
    school.addEmployee(new Employee("Иванов И.Р.", "Учитель математики"));
    school.addEmployee(new Employee("Соколова А.А.", "Директор"));

    // Добавление инвентаря
    school.addInventoryItem(new InventoryItem("Волейбольный мяч", 15));
    school.addInventoryItem(new InventoryItem("Компьютер", 10));

    // Добавление расписания
    school.addSchedule(new Schedule("Математика", "Иванов И.Р.", "8:00-8:45"));
    school.addSchedule(new Schedule("История", "Соколова А.А.", "9:00-9:45"));

    // Отображение информации
    cout << "Ученики: " << endl;
    school.displayStudents();

    cout << "Работники:" << endl;
    school.displayEmployees();

    cout << "Инвентарь:" << endl;
    school.displayInventory();

    cout << "Расписания:" << endl;
    school.displaySchedules();

    return 0;
}