#pragma once
class Point
{
	double first, second;
public:
	bool Init(double, double);
	void Read();
	void Display() const;

	double Distance() const;
};
