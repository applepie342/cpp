#include "snackSlot.h"
using namespace std;

int snackCount = 0;

SnackSlot::SnackSlot(int size) : _size(size) {}

SnackSlot::~SnackSlot() {}

void SnackSlot::addSnack(Snack* snack) {
    if (snackCount < _size) {
        _snacks[snackCount++] = snack;
    }
    else cout << "Слот заполнен.";
}

int SnackSlot::getSnackCount() {
    return snackCount;
}

void SnackSlot::showSnacks() {
    for (int i = 0; i < snackCount; i++) {
        _snacks[i]->display();
    }
}

