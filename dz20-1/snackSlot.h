#pragma once
#include<iostream>
#include <string>
#include "snack.h"
using namespace std;

class SnackSlot
{
public:
	SnackSlot(int size);
	~SnackSlot();

	void addSnack(Snack* snack);
	int getSnackCount();
	void showSnacks();

private:
	int _size;
	Snack* _snacks[10];
};