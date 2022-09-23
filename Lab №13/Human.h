#include <string>
#include <sstream>
#pragma once /* Защита от двойного подключения заголовочного файла */

using namespace std;

class human {
public:
	// Конструктор класса human
	human(string last_name, string name, string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	// Получение ФИО человека
	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

//чтобы переопределить метод get_full_name в классах-наследниках, необходимо поменять модификатор доступа на protected
protected:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
};
