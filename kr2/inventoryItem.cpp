#include "inventoryItem.h"
using namespace std;

InventoryItem::InventoryItem(string itemName, int quantity) : _itemName(itemName), _quantity(quantity) {}
InventoryItem::~InventoryItem() {}

void InventoryItem::display() {
	setlocale(LC_ALL, "");
	cout << "�������: " << _itemName << endl;
	cout << "����������: " << _quantity << endl
	<< "_______________________________" << endl;
}