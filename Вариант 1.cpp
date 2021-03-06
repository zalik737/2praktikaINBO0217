// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

float a = 4.8;
float b = -7.9;
float n=0, m;

void Abolshe(float a,float b)
{
	n = pow((a - b), 1/3);
}
void Amenshe(float a, float b)
{
	n = (pow(a, 2) + (a - b) / sin(a*b));
}

void Nbolshe(float a, float b, float n)
{
	m = ((n + a) / -b + sqrt(pow(sin(n), 2) - cos(n)));
}
void Nravno(float a, float b, float n)
{
	m = (pow(b, 2) + tan(n*a));
}
void Nmenshe(float a, float b, float n)
{
	m = (pow(b, 3) + n * pow(a, 2));
}


int main()
{
	if (a>=b) Abolshe(a,b);
	else Amenshe(a, b);
	if (n < b) Nbolshe(a, b, n);
	else if (n == b) Nravno(a, b, n);
	else Nmenshe(a, b, n);
	cout << "a=" << a << endl << "b=" << b << endl << "n=" << n << endl << "m=" << m << endl;
	system("pause");


    return 0;
}
