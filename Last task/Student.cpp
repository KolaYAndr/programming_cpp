#include "Student.h"
#include <iostream>
#include <fstream>

using namespace std;

//������� �������� � ������ ������
void Student::change_group(string newGroup) {
    this->study_group = newGroup;
}

//������ � ���� �������������� ����������
void Student::to_textfile() {
    Person::to_textfile();
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/�����/���������������� C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nStudy group: " << study_group << endl;
    }
    out.close();
}
