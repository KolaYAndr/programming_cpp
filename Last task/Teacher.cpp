#include <fstream>
#include "Teacher.h"

//запись в файл дополнительной информации
void Teacher::to_textfile() {
    Person::to_textfile();
    ofstream out;
    out.open("C:/Users/kolay/OneDrive/Desktop/Учёба/Программирование C++/HW/Address_book.txt", ios::app);
    if (out.is_open()) {
        out << "\nDepartment: " << department << "\nWith experience: " << experience << endl;
    }
    out.close();
}

//функция для изменения стажа
void Teacher::change_exp(int newExp) {
    this->experience = newExp;
}