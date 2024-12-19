#include "snack.h"
#include "snackSlot.h"
#include "vendingMachine.h"
using namespace std;

int main() {
	int slotCount = 5;

	Snack *bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slot);

	cout << machine->getEmptySlotsCount();

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}

