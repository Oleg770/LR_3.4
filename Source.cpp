//Lab_03_4.cpp
// < Кальки Олега >
// Лабораторна робота № 3.4
// Розгалуження,задане плоскою фігурою
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((y = sqrt(R * R - x * x) && y <= x) ||
(y = sqrt(R * R - x * x) && y = x))
		cout << "yes" << endl;
	else 

	cout << "no" << endl;
	cin.get();
	return 0;


}