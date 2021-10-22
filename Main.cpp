#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*Перегруженная функция*/
int Finding_max(int i1, int i2)
{
	if (i1 > i2)
		return i1;
	else
		return i2;
}
int Finding_max(int i1, int i2, int i3)
{
	if (i1 >= i2 && i1 >= i3)
		return i1;
	if (i2 >= i1 && i2 >= i3)
		return i2;
	if (i3 >= i1 && i3 >= i2)
		return i3;
}
float Finding_max(float f1, float f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}
double Finding_max(double d1, double d2, double d3)
{
	if (d1 >= d2 && d1 >= d3)
		return d1;
	if (d2 >= d1 && d2 >= d3)
		return d2;
	if (d3 >= d1 && d3 >= d2)
		return d3;
}

/*Шаблон функции для 2-ч входных чисел*/
template <typename Numbers_2>
Numbers_2 Max_of_2(Numbers_2 num1, Numbers_2 num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
/*Шаблон функции для 3-ч входных чисел*/
template <typename Numbers_3>
Numbers_3 Max_of_3(Numbers_3 num1, Numbers_3 num2, Numbers_3 num3)
{
	if (num1 >= num2 && num1 >= num3)
		return num1;
	if (num2 >= num1 && num2 >= num3)
		return num2;
	if (num3 >= num1 && num3 >= num2)
		return num3;
}

void main()
{
	srand(time(NULL));
	int i1, i2, i3;
	float f1, f2;
	double d1, d2, d3;
	i1 = rand();
	i2 = rand();
	cout << "Function\ni1: " << i1 << "\ni2: " << i2 << "\nMax: " << Finding_max(i1, i2) << "\n" << endl;
	cout << "Sample\ni1: " << i1 << "\ni2: " << i2 << "\nMax: " << Max_of_2(i1, i2) << "\n" << endl;
	i1 = rand();
	i2 = rand();
	i3 = rand();
	cout << "Function\ni1: " << i1 << "\ni2: " << i2 << "\ni3: " << i3 << "\nMax: " << Finding_max(i1, i2, i3) << '\n' << endl;
	cout << "Sample\ni1: " << i1 << "\ni2: " << i2 << "\ni3: " << i3 << "\nMax: " << Max_of_3(i1, i2, i3) << "\n" << endl;
	f1 = rand() * pow(10, -1 * (-3 + rand() % 7));
	f2 = rand() * pow(10, -1 * (-3 + rand() % 7));
	cout << "Function\nf1: " << f1 << "\nf2: " << f2 << "\nMax: " << Finding_max(f1, f2) << '\n' << endl;
	cout << "Sample\nf1: " << f1 << "\nf2: " << f2 << "\nMax: " << Max_of_2(f1, f2) << '\n' << endl;
	d1 = rand() * pow(10, -1 * (rand() % 307));
	d2 = rand() * pow(10, -1 * (rand() % 307));
	d3 = rand() * pow(10, -1 * (rand() % 307));
	cout << "Function\nd1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << "\nMax: " << Finding_max(d1, d2, d3) << "\n" << endl;
	cout << "Sample\nd1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << "\nMax: " << Max_of_3(d1, d2, d3);
}