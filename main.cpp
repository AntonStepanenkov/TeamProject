#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
	double a, b;
	int x, operation, s;
	do{
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;

		cout << "Change operation:" << endl;
		cout << "1. a + b" << endl;
		cout << "2. a - b " << endl;
		cout << "3. a * b " << endl;
		cout << "4. a / b" << endl;
		cout << "0. Escape" << endl;
		cout << "Input of the operation: ";
		cin >> operation;
switch (operation)
		{
		case 1:
			cout << "a + b = ";
			cout << MySum(a, b) << endl;
			cout << "To return write 1. To escape write 0: ";
			cin >> s;
			system("cls");
			break;
		case 2:
			cout << "a - b = ";
			cout << MySub(a, b) << endl;
			cout << "To return write 1. To escape write 0: ";
			cin >> s;
			system("cls");
			break;
		case 3:
			cout << "a * b = ";
			cout << MyMul(a, b) << endl;
			cout << "To return write 1. To escape write 0: ";
			cin >> s;
			system("cls");
			break;
		case 4:
			cout << "a / b = ";
			cout << MyDiv(a, b) << endl;
			cout << "To return write 1. To escape write 0: ";
			cin >> s;
			system("cls");
	}

	} while (s != 0);
	system("pause");
	return 0;
}
