#include<iostream>
#include <fstream> 
#include "teenager.h"
using namespace std;

int main()
{
   Adult* person1 = new Adult;
   Child* person2 = new Child;
   Adult* person3 = new Adult;
   Child* person4 = new Child;
   Teenager* person5 = new Teenager;

   IHuman** arr = new IHuman * [5] {person1, person2, person3, person4, person5};

   bool start = true;
   do {
       cout << "Выберите человека: " << endl
           << "1 - чел1" << endl << "2 - чел2" << endl
           << "3 - чел3" << endl << "4 - чел4" << endl
           << "5 - чел5" << endl << "0 - выход из программы" << endl
           << "__________________" << endl;

       char choice;
       cin >> choice;
       switch (choice)
       {
       case '1':
           arr[0]->read();
           break;
       case '2':
           arr[1]->read();
           cout << "__________________" << endl;
           break;
       case '3':
           arr[2]->read();
           cout << "__________________" << endl;
           break;
       case '4':
           arr[3]->read();
           cout << "__________________" << endl;
           break;
       case '5':
           arr[4]->read();
           break;
       case '0':
           start = false;
           break;
       default:
           break;
       }
   } while (start);

   ofstream out("Human.txt", ios::out | ios::trunc);
   

   for (int i = 0; i < 5; ++i) {
       arr[i]->writeToFile();
       cout << "Человек \"" << arr[i]->getName() << "\" успешно записан в файл." << endl;
   }
   out.close();

   delete person1;
   delete person2;
   delete person3;
   delete person4;
   delete person5;
   delete[] arr;
   return 0;
}
