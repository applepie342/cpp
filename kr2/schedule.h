#pragma once
#include<iostream>
#include <string>
using namespace std;

class Schedule {
public:
    Schedule(string subject, string teacher, string time);
    ~Schedule();

    void display();

private:
    string _subject;
    string _teacher;
    string _time;
};