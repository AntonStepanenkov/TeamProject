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



return 0;
}