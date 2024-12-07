#include "anyHuman.h"
#include <iostream>
using namespace std;

string anyHuman::correctAlpha(string str) {
    setlocale(LC_ALL, "");
    for (int i = 0; i < str.length(); ++i) {
        if (!isalpha(str.at(i)) && !ispunct(str.at(i))) {
            cout << "Некорректный ввод данных в поле." << endl
                << "__________________" << endl;
            return "undefined";
        }
        if (!(str == "undefined")) return str;
    }
    exit(0);
}

int anyHuman::correctCount(int count) {
    setlocale(LC_ALL, "");
    if (count >= 0) return count;
    else {
        cout << "Некорректный ввод данных в поле." << endl
            << "__________________" << endl;
        return 0;
    }
}
