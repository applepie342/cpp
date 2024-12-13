#include "school.h"
#include<iostream>
using namespace std;


int main() {
    School school;
    school.addStudent(new Student("�������", 10));
    school.addStudent(new Student("���������", 9));

    // ���������� �����������
    school.addEmployee(new Employee("������ �.�.", "������� ����������"));
    school.addEmployee(new Employee("�������� �.�.", "��������"));

    // ���������� ���������
    school.addInventoryItem(new InventoryItem("������������ ���", 15));
    school.addInventoryItem(new InventoryItem("���������", 10));

    // ���������� ����������
    school.addSchedule(new Schedule("����������", "������ �.�.", "8:00-8:45"));
    school.addSchedule(new Schedule("�������", "�������� �.�.", "9:00-9:45"));

    // ����������� ����������
    cout << "�������: " << endl;
    school.displayStudents();

    cout << "���������:" << endl;
    school.displayEmployees();

    cout << "���������:" << endl;
    school.displayInventory();

    cout << "����������:" << endl;
    school.displaySchedules();

    return 0;
}