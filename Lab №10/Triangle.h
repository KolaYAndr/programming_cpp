#pragma once
#include "Dot.h"

using namespace std;

class Triangle
{
public:
	Triangle();
	Triangle(Dot*, Dot*, Dot*);
	void show_sides() const;
	double get_perimeter() const;
	double get_square() const;
private:
	Dot* d1;
	Dot* d2;
	Dot* d3;
};

