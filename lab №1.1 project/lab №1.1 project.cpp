#include "Point.h"
#include <iostream>
using namespace std;
Point makePoint(double x, double y)
{
	Point z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}
int main()
{
	Point z;
	z.Read();
	z.Display();
	cout << "Distance() = " << z.Distance() << endl << endl;
	double x, y;
	cout << "Input coordinates:" << endl << endl;
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	z = makePoint(x, y);
	z.Display();
	cout << "Distance() = " << z.Distance() << endl;
	cin.get();
	return 0;
}
