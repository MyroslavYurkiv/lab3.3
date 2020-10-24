// Lab_03_3.cpp
// < Юрків Мирослав >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 31
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	if ( x <= -1-R)
		y = ((( x + 1.5 - R ) * (-R))/(0.5 - 2*R)) + R;
	else
		if ( ( -1-R < x ) && ( x <= -1 ) )
			y = sqrt(pow(R, 2) - pow((x + 1), 2));
		else
			if ( ( -1 < x ) && ( x <= 1) )
				y = R;
			else
				if ( ( 1 < x ) && ( x <= 2 ) )
					y = ((x - 1) * (-1 - R)) + R;
				else
					y = -1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}