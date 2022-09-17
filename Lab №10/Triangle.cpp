#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

//пустой конструтор
Triangle::Triangle() {};

//метод получения периметра
double Triangle::get_perimeter() const
{
	//трижды вызываем расстояние через метод точек
	double s1 = Triangle::d1->distance_to(*d2);
	double s2 = Triangle::d2->distance_to(*d3);
	double s3 = Triangle::d3->distance_to(*d1);

	return s1 + s2 + s3;
}

//медот получения площади
double Triangle::get_square() const
{
	//получаем стороны через точки
	double s1 = Triangle::d1->distance_to(*d2);
	double s2 = Triangle::d2->distance_to(*d3);
	double s3 = Triangle::d3->distance_to(*d1);
	//по формуле Герона рассчитываем площадь
	double p = (s1 + s2 + s3) / 2;
	double res = sqrt(p * (p - s1) * (p - s2) * (p - s3));

	return res;
}

//метод для вывода сторон
void Triangle::show_sides() const
{
	double s1 = Triangle::d1->distance_to(*d2);
	double s2 = Triangle::d2->distance_to(*d3);
	double s3 = Triangle::d3->distance_to(*d1);
	cout << "Sides: " << s1 << " " << s2 << " " << s3 << endl;
}


//конструтор с задаванием полей
Triangle::Triangle(Dot *d1, Dot *d2, Dot *d3)
{
	this->d1 = d1;
	this->d2 = d2;
	this->d3 = d3;
}
