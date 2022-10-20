// Lab_04_3.cpp
// < Царук В'ячеслав >
// Лабораторна робота № 4.3
// Цикли
// Варіант 25 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(8) << "x" << " |"
		<< setw(14) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = 3 * x + 2 / c;
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = 3 * x + 2 / c;
		cout << "|" << setw(8) << setprecision(2) << x
			<< " |" << setw(14) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
