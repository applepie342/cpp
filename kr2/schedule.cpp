#include "schedule.h"
using namespace std;

Schedule::Schedule(string subject, string teacher, string time) : _subject(subject), _teacher(teacher), _time(time) {}
Schedule::~Schedule() {}

void Schedule::display() {
	setlocale(LC_ALL, "");
	cout << "�������: " << _subject << endl
		<< "�������: " << _teacher << endl
		<< "�����: " << _time << endl
		<< "_______________________________" << endl;
}