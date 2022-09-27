#include <iostream>
#include "AccessCard.h"
#include "Developer.h"
#include "Student.h"
#include "Teacher.h"
#include <list>

using namespace std;

int main() {
    //создаём людей
    AccessCard students_card = AccessCard("Student");
    AccessCard teachers_card = AccessCard("Teacher");
    AccessCard developers_card = AccessCard("Developer");

    Developer developer1 = Developer("David", "789", "Kotlin", "20.03.2000", 3, &developers_card);
    Developer developer2 = Developer("Masha", "788", "Java", "21.04.2002", 1, &developers_card);
    Teacher teacher1 = Teacher("Vladimir", "777", "04.01.1989", "Math department", 10, &teachers_card);
    Teacher teacher2 = Teacher("Anastasiya", "778", "03.02.1998", "Physics department", 5, &teachers_card);
    Student student1 = Student("Maksim", "767", "09.06.2002", "K32201", &students_card);
    Student student2 = Student("Dmitriy", "765", "03.05.2003", "K32201", &students_card);

    //создаём список
    list<Person> register_book;

    register_book.push_back(developer1);
    register_book.push_back(developer2);
    register_book.push_back(teacher1);
    register_book.push_back(teacher2);
    register_book.push_back(student1);
    register_book.push_back(student2);

    for (auto& item : register_book) {
        if (item.card.get_access(2)) cout << "Accessed" << endl;
        else cout << "Access denied" << endl;
        item.to_textfile();
    }

}
