#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
	double a, b;
	int x, operation, s;
	do{
		cout << "Введите число a: ";
		cin >> a;
		cout << "Введите число b: ";
		cin >> b;

		cout << "Выберите операцию для выполнения:" << endl;
		cout << "1. Сложение" << endl;
		cout << "2. Вычитание" << endl;
		cout << "3. Умножение" << endl;
		cout << "4. Деление" << endl;
		cout << "0. Выход из программы" << endl;
		cout << "Ввод операции: ";
		cin >> operation;
switch (operation)
		{
		case 1:
			cout << "a + b = ";
			cout << MySum(a, b) << endl;
			cout << "Для возврата в меню нажмите 1. Для выхода из программы нажмите 0:: ";
			cin >> s;
			system("cls");
			break;
		case 2:
			cout << "a - b = ";
			cout << MySub(a, b) << endl;
			cout << "Для возврата в меню нажмите 1. Для выхода из программы нажмите 0: ";
			cin >> s;
			system("cls");
			break;
		case 3:
			cout << "a * b = ";
			cout << MyMul(a, b) << endl;
			cout << "Для возврата в меню нажмите 1. Для выхода из программы нажмите 0: ";
			cin >> s;
			system("cls");
			break;
		case 4:
			cout << "a / b = ";
			cout << MyDiv(a, b) << endl;
			cout << "Для возврата в меню нажмите 1. Для выхода из программы нажмите 0: ";
			cin >> s;
			system("cls");
	}

	} while (s != 0);
	system("pause");
	return 0;
}