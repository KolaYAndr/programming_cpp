#pragma once

#include "Person.h"
#include <iostream>

using namespace std;

//объ€вл€ем класс и наследуем клас
class Developer : public Person {
public:
    //конструктор класса, передающий в родительский конструктор значени€
    Developer(string name, string phone_number, string programming_language, string date_of_birth, int exp,
        AccessCard* card)
        : Person(name, phone_number, "Developer", date_of_birth, card),
        programming_language(programming_language), experience(exp) {}

    //прототипы функций
    void to_textfile();

    void change_language(string);

    void change_exp(int);

    //закрытые пол€
private:
    string programming_language;
    int experience;
};