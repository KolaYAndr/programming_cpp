#pragma once

#include "Person.h"
#include <iostream>

using namespace std;

//��������� ����� � ��������� ����
class Developer : public Person {
public:
    //����������� ������, ���������� � ������������ ����������� ��������
    Developer(string name, string phone_number, string programming_language, string date_of_birth, int exp,
        AccessCard* card)
        : Person(name, phone_number, "Developer", date_of_birth, card),
        programming_language(programming_language), experience(exp) {}

    //��������� �������
    void to_textfile();

    void change_language(string);

    void change_exp(int);

    //�������� ����
private:
    string programming_language;
    int experience;
};