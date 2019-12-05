#include "functions.h"

// функция под буквой а
double f1(double x) {
	return 3 * x + pow(5, x) + 6;
}

// функция под буквой б
double f2(double x) {
	return 4 * pow(x, 3) - 5 * pow(x, 2) - 2 * x + 2;
}

// производная первого порядка функции под а
double f1_1(double x) {
	return pow(5, x) * log(5) + 3;
}

// производная второго порядка функции под а
double f1_2(double x) {
	return pow(5, x) * pow(log(5), 2);
}

// производная первого порядка функции под б
double f2_1(double x) {
	return 12 * pow(x, 2) - 10 * x - 2;
}

// производная второго порядка функции под б
double f2_2(double x) {
	return 24 * x - 10;
}