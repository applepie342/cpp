#include "inventoryItem.h"
using namespace std;

InventoryItem::InventoryItem(string itemName, int quantity) : _itemName(itemName), _quantity(quantity) {}
InventoryItem::~InventoryItem() {}

void InventoryItem::display() {
	setlocale(LC_ALL, "");
	cout << "Предмет: " << _itemName << endl;
	cout << "Количество: " << _quantity << endl
	<< "_______________________________" << endl;
}