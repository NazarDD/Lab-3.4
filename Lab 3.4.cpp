// Lab_03_4.cpp
// ����� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 7
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((std::pow(y, 2) <= std::abs(R) * 2 * y - std::pow(-x - std::abs(R), 2)) || (y <= 0 && y >= -std::abs(R) && x >= 0 && x <= std::abs(2 * R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}