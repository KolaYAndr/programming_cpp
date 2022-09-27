#pragma once
#include "AccessCard.h"
#include <iostream>

using namespace std;

//создаём общий абстрактный класс
class Person {
public:
    //объявляем конструктор
    Person(string name, string phone_number, string status, string date_of_birth, AccessCard* card) :
        name(name), phone_number(phone_number), status(status), date_of_birth(date_of_birth), card(*card) {};

    //объявляем прототипы функций
    virtual void to_textfile();

    void change_name(string);

    void change_phone_number(string);

    void change_status(string);

    AccessCard card;
    //объявляем поля достуаные для классов-наследников
protected:
    string name;
    string phone_number;
    string status;
    string date_of_birth;
};
