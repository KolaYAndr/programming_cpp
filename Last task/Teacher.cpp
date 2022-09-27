#include <fstream>
#include "Teacher.h"

//������ � ���� �������������� ����������
void Teacher::to_textfile() {
    Person::to_textfile();
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/�����/���������������� C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nDepartment: " << department << "\nWith experience: " << experience << endl;
    }
    out.close();
}

//������� ��� ��������� �����
void Teacher::change_exp(int newExp) {
    this->experience = newExp;
}