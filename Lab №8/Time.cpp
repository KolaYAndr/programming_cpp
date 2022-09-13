#include "Time.h"
#include <iostream>

using namespace std;

//описываем функции установки и получения часов, минут и секунд
void Time::set_hours(int hours) {
    Time::hours = hours;
}

void Time::set_minutes(int minutes) {
    Time::minutes = minutes;
}

void Time::set_seconds(int seconds) {
    Time::seconds = seconds;
}

int Time::get_hours() const {
    return Time::hours;
}

int Time::get_minutes() const {
    return Time::minutes;
}

int Time::get_seconds() const {
    return Time::seconds;
}

//функция вывода времени
void Time::show_time() const {
    cout << "Time is - " << Time::get_hours() << ":" << Time::get_minutes() << ":" << Time::get_seconds() << endl;
}


//конструтор с преобразованием неправильного типа данных
Time::Time(int hours, int minutes, int seconds) {

    //если какое-либо значение неправильно, то приводим его к правильному
    if (seconds >= 60) {
        seconds %= 60;
        minutes++;
    }

    if (minutes >= 60) {
        minutes %= 60;
        hours++;
    }

    if (hours >= 24) hours %= 24;

    Time::seconds = seconds;
    Time::minutes = minutes;
    Time::hours = hours;
}

//конструктор без параметров объявляет время 0:0:0
Time::Time() {
    Time::hours = 0;
    Time::minutes = 0;
    Time::seconds = 0;
}

void Time::sum(Time t1, Time t2) {
    //суммируем аналогично конструктору с параметрами
    int temp =
        (t1.get_hours() + t2.get_hours()) * 3600 + (t1.get_minutes() + t2.get_minutes()) * 60 + t1.get_seconds() +
        t2.get_seconds();

    int hours = temp / 3600;
    temp %= 3600;
    int minutes = temp / 60;
    temp %= 60;
    int seconds = temp;

    if (seconds >= 60) {
        seconds %= 60;
        minutes++;
    }

    if (minutes >= 60) {
        minutes %= 60;
        hours++;
    }

    if (hours >= 24) hours %= 24;

    Time::set_hours(hours);
    Time::set_minutes(minutes);
    Time::set_seconds(seconds);
}
