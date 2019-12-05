#include <iostream>
#include "functions.h"

using namespace std;

double num_method(double a, double b, unsigned n, unsigned &m) {
	double e = 0.0001, x = 0, c = 0;
	
	if (n == 1) {

		while (b - a > 2 * e) {
			c = (a + b) / 2;
			if (f1(a) * f1(c) < 0)
				b = c; else
				if (f1(b) * f1(c) < 0)
					a = c;
			m++;
		}
		return x = (a + b) / 2;
	}
	else if (n == 2) {

		while (b - a > 2 * e) {
			c = (a + b) / 2;
			if (f2(a) * f2(c) < 0)
				b = c; else
				if (f2(b) * f2(c) < 0)
					a = c;
			m++;
		}
		return x = (a + b) / 2;
	}
	else return 0;
}

int main()
{
	setlocale(0, "RUS");

	// Отрезки неопределенности:
	// 1) a = -3, b = -1
	// 2) a = -1, b = 0
	//	  a = 0, b = 1
	//    a = 1, b = 1.5

	double a = 0, b = 1, // отрезок неопределённости
	c = 0, x = 0; unsigned m = 0; // m - кол-во итераций в цикле

	x = num_method(a, b, 2, m);

	cout << "x = " << x << "\n";
	cout << "Количество итераций: " << m << "\n";

	system("pause");

	return 0;
}
