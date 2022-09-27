#pragma once

#include "Person.h"

//��������� ����� � ��������� ����
class Teacher : public Person {
public:
    //����������� ������, ���������� � ������������ ����������� ��������
    Teacher(string name, string phone_number, string date_of_birth, string dep, int exp, AccessCard* card)
        : Person(name, phone_number, "Teacher", date_of_birth, card), department(dep), experience(exp) {}

	//��������� �������
    void to_textfile();

    void change_exp(int);

	//�������� ����
private:
    string department;
    int experience;
};
