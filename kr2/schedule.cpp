#include "schedule.h"
using namespace std;

Schedule::Schedule(string subject, string teacher, string time) : _subject(subject), _teacher(teacher), _time(time) {}
Schedule::~Schedule() {}

void Schedule::display() {
	setlocale(LC_ALL, "");
	cout << "Предмет: " << _subject << endl
		<< "Учитель: " << _teacher << endl
		<< "Время: " << _time << endl
		<< "_______________________________" << endl;
}