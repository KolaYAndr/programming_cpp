#pragma once

#include "Person.h"

//объ€вл€ем класс и наследуем клас
class Teacher : public Person {
public:
    //конструктор класса, передающий в родительский конструктор значени€
    Teacher(string name, string phone_number, string date_of_birth, string dep, int exp, AccessCard* card)
        : Person(name, phone_number, "Teacher", date_of_birth, card), department(dep), experience(exp) {}

	//прототипы функций
    void to_textfile();

    void change_exp(int);

	//закрытые пол€
private:
    string department;
    int experience;
};
