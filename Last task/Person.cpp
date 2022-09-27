#include "Person.h"
#include <fstream>
#include <iostream>
#include <utility>

using namespace std;

//������� ��� ��������� �����
void Person::change_name(string newName) {
    this->name = newName;
}

//������� ��� ��������� ������ ��������
void Person::change_phone_number(string newPhone) {
    this->phone_number = newPhone;
}

//������� ��� ��������� �������
void Person::change_status(string newStatus) {
    this->status = newStatus;
}

//������� ��� ������ � ���� ���������� ������
void Person::to_textfile() {
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/�����/���������������� C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nName: " << name << "\nDate of birth: " << date_of_birth << "\nPhone number: "
            << phone_number << "\nStatus: " << status;
    }
}


