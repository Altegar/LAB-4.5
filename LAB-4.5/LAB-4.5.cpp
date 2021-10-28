// LAB-4.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_04_5.cpp
// Сушинський Ігор
// Лабораторна робота № 4.5
// "Попадання" у плоску фігуру.
// Варіант 18


#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R, a, b;

	srand((unsigned) time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;


		if ((y <= x && (x - a) * (x - a) + (y - b) * (y - b) <= R) ||
			((x + a) * (x + a) + (y + b) * (y + b) <= R && y <= x))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 4 * R * rand() / RAND_MAX - 2 * R;
		y = 4 * R * rand() / RAND_MAX - 2 * R;

		if ((y <= x && (x - a) * (x - a) + (y - b) * (y - b) <= R) ||
			((x + a) * (x + a) + (y + b) * (y + b) <= R && y <= x))
			cout << setw(8) << setprecision(4) << x << "  "
			     << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << "  "
			     << setw(8) << setprecision(4) << y << "  " << "no" << endl;
	}
	return 0;
}