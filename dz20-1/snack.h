#pragma once
#include<iostream>
#include <string>
using namespace std;

class Snack
{
public:
	Snack(string name, int cost);
	Snack(string name);
	~Snack();

	void display();

private:
	string _name;
	int _cost;
};