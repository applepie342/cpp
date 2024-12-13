#include "IPerson.h"
using namespace std;

IPerson::IPerson(string name) : _name(name) {}

IPerson::~IPerson() {}

void IPerson::display() {
	setlocale(LC_ALL, "");
	cout << "Èìÿ: " << _name << endl;
}