//ПРАКТИЧЕСКАЯ РАБОТА № 4 Базовые алгоритмические структуры. Цикл. задание 2: решение системы уравнений 
#include <iostream>

using namespace std;

int main() {
	double a, b, c, xn, xk, f;
	int dx;
	system("chcp 1251");
	system("cls");
	cout << "Введите a = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите c = ";
	cin >> c;
	cout << "Введите начало диапазона xn = ";
	cin >> xn;
	cout << "Введите конец диапазона xk = ";
	cin >> xk;
	cout << "Введите шаг изменения dx = ";
	cin >> dx;
	while(xn <= xk) {
		if (xn < 0 && b != 0) {
			if (b == -10) {
				cout << "x = " << xn << " F - нет решения" << endl;
			}
			else {
				f = a - (xn / (10 + b));
				cout << "x = " << xn << " F = " << f << endl;
			}
			xn += dx;
		}
		else if (xn > 0 && b == 0) {
			if (xn == c) {
				cout << "x = " << xn << " F - нет решения" << endl;
			}
			else {
				f = (xn - a) / (xn - c);
				cout << "x = " << xn << " F = " << f << endl;
			}
			xn += dx;
		}
		else {
			if (c == 0) {
				cout << "x = " << xn << " F - нет решения" << endl;
			}
			else {
				f = 3 * xn + (2 / c);
				cout << "x = " << xn << " F = " << f << endl;
			}
			xn += dx;
		}
	}
	system("pause");
	return 0;
}