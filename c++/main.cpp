//#include<iostream>
//#include <fstream> 
//#include "teenager.h"
//using namespace std;
//
//int main()
//{
//    Adult* person1 = new Adult;
//    Child* person2 = new Child;
//    Adult* person3 = new Adult;
//    Child* person4 = new Child;
//    Teenager* person5 = new Teenager;
//
//    IHuman** arr = new IHuman * [5] {person1, person2, person3, person4, person5};
//
//    bool start = true;
//    do {
//        cout << "Выберите человека: " << endl
//            << "1 - чел1" << endl << "2 - чел2" << endl
//            << "3 - чел3" << endl << "4 - чел4" << endl
//            << "5 - чел5" << endl << "0 - выход из программы" << endl
//            << "__________________" << endl;
//
//        char choice;
//        cin >> choice;
//        switch (choice)
//        {
//        case '1':
//            arr[0]->read();
//            break;
//        case '2':
//            arr[1]->read();
//            cout << "__________________" << endl;
//            break;
//        case '3':
//            arr[2]->read();
//            cout << "__________________" << endl;
//            break;
//        case '4':
//            arr[3]->read();
//            cout << "__________________" << endl;
//            break;
//        case '5':
//            arr[4]->read();
//            break;
//        case '0':
//            start = false;
//            break;
//        default:
//            break;
//        }
//    } while (start);
//
//    ofstream out("Human.txt", ios::out | ios::trunc);
//    
//
//    for (int i = 0; i < 5; ++i) {
//        arr[i]->writeToFile();
//        cout << "Человек \"" << arr[i]->getName() << "\" успешно записан в файл." << endl;
//    }
//    out.close();
//
//    delete person1;
//    delete person2;
//    delete person3;
//    delete person4;
//    delete person5;
//    delete[] arr;
//    return 0;
//}

#include <iostream>
#include <vector>
#include <string>

class LibraryItem {
public:
    virtual void displayInfo() const = 0; // чисто виртуальная функция
    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
protected:
    std::string title;
    std::string author;
public:
    Book(const std::string& title, const std::string& author) : title(title), author(author) {}

    void displayInfo() const override {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

class EBook : public Book {
private:
    std::string fileFormat;
public:
    EBook(const std::string& title, const std::string& author, const std::string& format)
        : Book(title, author), fileFormat(format) {}

    void displayInfo() const override {
        Book::displayInfo();
        std::cout << "Format: " << fileFormat << " (E-Book)" << std::endl;
    }
};

class PrintedBook : public Book {
private:
    int pages;
public:
    PrintedBook(const std::string& title, const std::string& author, int pages)
        : Book(title, author), pages(pages) {}

    void displayInfo() const override {
        Book::displayInfo();
        std::cout << "Pages: " << pages << " (Printed Book)" << std::endl;
    }
};

class Person {
public:
    virtual void displayInfo() const = 0; // чисто виртуальная функция
    virtual ~Person() {}
};

class Employee : public Person {
private:
    std::string name;
public:
    Employee(const std::string& name) : name(name) {}

    void displayInfo() const override {
        std::cout << "Employee Name: " << name << std::endl;
    }
};

class Client : public Person {
private:
    std::string name;
public:
    Client(const std::string& name) : name(name) {}

    void displayInfo() const override {
        std::cout << "Client Name: " << name << std::endl;
    }
};

class Transaction {
private:
    LibraryItem* item;
    Person* person;
public:
    Transaction(LibraryItem* item, Person* person) : item(item), person(person) {}

    void displayTransaction() const {
        person->displayInfo();
        item->displayInfo();
    }
};

class Library {
private:
    std::vector<LibraryItem*> items;
    std::vector<Person*> people;

public:
    ~Library() {
        // Освобождение памяти
        for (auto item : items) {
            delete item;
        }
        for (auto person : people) {
            delete person;
        }
    }

    void addItem(LibraryItem* item) {
        items.push_back(item);
    }

    void addPerson(Person* person) {
        people.push_back(person);
    }

    void displayItems() const {
        for (const auto& item : items) {
            item->displayInfo();
        }
    }

    void displayPeople() const {
        for (const auto& person : people) {
            person->displayInfo();
        }
    }

    LibraryItem* getItem(int index) const {
        return items[index];
    }

    Person* getPerson(int index) const {
        return people[index];
    }
};

class LibrarySystem {
private:
    Library library;
public:
    void run() {
        // Создание книг
        library.addItem(new PrintedBook("1984", "George Orwell", 328));
        library.addItem(new EBook("The Catcher in the Rye", "J.D. Salinger", "PDF"));

        // Создание сотрудников и клиентов
        library.addPerson(new Employee("Alice"));
        library.addPerson(new Client("Bob"));

        // Отображение информации о книгах и людях
        std::cout << "Library Items:" << std::endl;
        library.displayItems();

        std::cout << "\nLibrary People:" << std::endl;
        library.displayPeople();

        // Пример транзакции
        Transaction transaction(library.getItem(0), library.getPerson(1));
        transaction.displayTransaction();
    }
};

int main() {
    LibrarySystem system;
    system.run();

    return 0;
}