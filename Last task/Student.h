#pragma once

#include "Person.h"

//объ€вл€ем класс и наследуем класс
class Student : public Person {
public:
    //конструктор класса, передающий в родительский конструктор значени€
    Student(string name, string phone_number, string date_of_birth, string group, AccessCard* card)
        : Person(name, phone_number, "Student", date_of_birth, card), study_group(group) {}

    //прототипы функций
    void change_group(string);

    void to_textfile();

    //закрытое поле
private:
    string study_group;
};