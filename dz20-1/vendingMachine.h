#pragma once
#include<iostream>
#include <string>
#include "snackSlot.h"
using namespace std;

class VendingMachine
{
public:
	VendingMachine(int slotCount);
	~VendingMachine();

	void addSlot(SnackSlot* slot);
	int getEmptySlotsCount();

private:
	SnackSlot* _slots[5];
	int _slotCount;
};
