#include "Human.h"
#include <string>

using namespace std;

class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		string last_name,
		string name,
		string second_name,

		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}

	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	//добавили вывод в консоль о ком идёт речь
	string get_full_name()
	{
		cout << "Teacher name is: " << endl;
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
private:
	// Учебные часы
	unsigned int work_time;
};
