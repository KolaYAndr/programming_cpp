#pragma once
#include <string>
#include <iostream>

using namespace std;

//объ€вл€ем класс
class AccessCard {
public:
    //конструктор, который в зависимости от типа карты выдаЄт уровенть доступа
    AccessCard(string type) : type(type) {
        if (type == "Student") accessLevel = 1;
        if (type == "Teacher") accessLevel = 2;
        if (type == "Developer") accessLevel = 3;
    }

    //прототип функции
    bool get_access(int) const;

    //закрытые пол€
private:
    int accessLevel;
    string type;
};
