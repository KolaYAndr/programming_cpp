#include "Dot.h"
#include <math.h>

//пустой конструктор
Dot::Dot()
{
	x = 0; y = 0;
}


//конструктор точки с координатами
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}

//рассчёт дистанции
double Dot::distance_to(Dot point) const
{
	return sqrt((point.x - x) * (point.x - x) + (point.y - y) * (point.y - y));
}
