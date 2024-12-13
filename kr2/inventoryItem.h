#pragma once
#include <iostream>
#include <string>
using namespace std;

class InventoryItem
{
public:
	InventoryItem(string itemName, int quantity);
	~InventoryItem();

	void display();

private:
	string _itemName;
	int _quantity;
};