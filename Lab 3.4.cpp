// Lab_03_4.cpp
// Думич Назар >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((std::pow(y, 2) <= std::abs(R) * 2 * y - std::pow(-x - std::abs(R), 2)) || (y <= 0 && y >= -std::abs(R) && x >= 0 && x <= std::abs(2 * R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}