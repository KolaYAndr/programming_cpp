#include "Developer.h"
#include <fstream>
#include <iostream>

using namespace std;

//запись в файл дополнительной информации
void Developer::to_textfile() {
    Person::to_textfile();
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/Учёба/Программирование C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nProgramming language:" << programming_language << ", experience: " << experience << endl;
    }
    out.close();
}

//функция смены языка программирования
void Developer::change_language(string newLanguage) {
    this->programming_language = newLanguage;
}

//функция для изменения стажа
void Developer::change_exp(int newExp) {
    this->experience = newExp;
}
