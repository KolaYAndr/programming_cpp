#pragma once

#include "Person.h"

//��������� ����� � ��������� �����
class Student : public Person {
public:
    //����������� ������, ���������� � ������������ ����������� ��������
    Student(string name, string phone_number, string date_of_birth, string group, AccessCard* card)
        : Person(name, phone_number, "Student", date_of_birth, card), study_group(group) {}

    //��������� �������
    void change_group(string);

    void to_textfile();

    //�������� ����
private:
    string study_group;
};