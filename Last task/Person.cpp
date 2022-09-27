#include "Person.h"
#include <fstream>
#include <iostream>
#include <utility>

using namespace std;

//функция для изменения имени
void Person::change_name(string newName) {
    this->name = newName;
}

//функция для изменения номера телефона
void Person::change_phone_number(string newPhone) {
    this->phone_number = newPhone;
}

//функция для изменения статуса
void Person::change_status(string newStatus) {
    this->status = newStatus;
}

//функция для записи в файл первичного класса
void Person::to_textfile() {
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/Учёба/Программирование C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nName: " << name << "\nDate of birth: " << date_of_birth << "\nPhone number: "
            << phone_number << "\nStatus: " << status;
    }
}


