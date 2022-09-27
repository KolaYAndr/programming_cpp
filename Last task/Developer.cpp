#include "Developer.h"
#include <fstream>
#include <iostream>

using namespace std;

//������ � ���� �������������� ����������
void Developer::to_textfile() {
    Person::to_textfile();
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/�����/���������������� C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nProgramming language:" << programming_language << ", experience: " << experience << endl;
    }
    out.close();
}

//������� ����� ����� ����������������
void Developer::change_language(string newLanguage) {
    this->programming_language = newLanguage;
}

//������� ��� ��������� �����
void Developer::change_exp(int newExp) {
    this->experience = newExp;
}
