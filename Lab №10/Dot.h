#pragma once
class Dot
{
public:
	Dot();
	Dot(double x, double y);
	double distance_to(Dot point) const;

private:
	double x;
	double y;
};
