#include <iostream>
#include <cmath>

using namespace std;

void main() {
	//инициализируем переменные координат и площади, после вводим координаты
	int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, s;
	cout << "Enter first coordinates" << endl;
	cin >> x1 >> y1;
	cout << "Enter second coordinates" << endl;
	cin >> x2 >> y2;
	cout << "Enter third coordinates" << endl;
	cin >> x3 >> y3;
	cout << "Enter fourth coordinates" << endl;
	cin >> x4 >> y4;
	cout << "Enter fifth coordinates" << endl;
	cin >> x5 >> y5;

	//присваиваем переменной площади значение по формуле
	s = x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5;
	s = abs(s / 2);
	
	//устанавливаем точность и выводим
	cout.precision(2);
	cout << "Square size is " << s << endl;
}
