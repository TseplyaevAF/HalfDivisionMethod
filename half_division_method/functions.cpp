#include "functions.h"

// ������� ��� ������ �
double f1(double x) {
	return 3 * x + pow(5, x) + 6;
}

// ������� ��� ������ �
double f2(double x) {
	return 4 * pow(x, 3) - 5 * pow(x, 2) - 2 * x + 2;
}

// ����������� ������� ������� ������� ��� �
double f1_1(double x) {
	return pow(5, x) * log(5) + 3;
}

// ����������� ������� ������� ������� ��� �
double f1_2(double x) {
	return pow(5, x) * pow(log(5), 2);
}

// ����������� ������� ������� ������� ��� �
double f2_1(double x) {
	return 12 * pow(x, 2) - 10 * x - 2;
}

// ����������� ������� ������� ������� ��� �
double f2_2(double x) {
	return 24 * x - 10;
}