#include <iostream>
#include "functions.h"

using namespace std;

double num_method(double a, double b, double c, unsigned n) {
	double e = 0.0001, x = 0;
	
	if (n == 1) {

		while (b - a > 2 * e) {
			c = (a + b) / 2;
			if (f1(a) * f1(c) < 0)
				b = c; else
				if (f1(b) * f1(c) < 0)
					a = c;
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
		}
		return x = (a + b) / 2;
	}
	else return 0;
}

int main()
{
	setlocale(0, "RUS");
	double a = -1, b = 0, // отрезок неопределённости
	c = 0, x = 0; unsigned n = 2;

	x = num_method(a, b, c, n);

	cout << "x = " << x << "\n";

	system("pause");

	return 0;
}
