#include "vendingMachine.h"
using namespace std;

int slotsNum = 0;

VendingMachine::VendingMachine(int slotCount) : _slotCount(slotCount) {}
VendingMachine::~VendingMachine() {}

void VendingMachine::addSlot(SnackSlot* slot) {
	if (slotsNum < _slotCount) {
		_slots[slotsNum++] = slot;
	}
	else cout << "Машина заполнена.";
}

int VendingMachine::getEmptySlotsCount() {
	return _slotCount - slotsNum;
}