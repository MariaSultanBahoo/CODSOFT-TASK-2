// CODSOFT TASK 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	char op;
	cout << "\t\t*****SIMPLE ARITHMETIC OPERATIONS CALCULATOR*****" << endl << endl;
	cout << "Enter 1st Integer Value" << endl;
	cin >> a;
	cout << "Enter 2nd Integer Value" << endl;
	cin >> b;
	cout << "Enter Any Operator: +,-,*,/" << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		c = a + b;
		cout << a << "+" << b << "=" << c << endl;
		break;
	case '-':
		c = a - b;
		cout << a << "-" << b << "=" << c << endl;
		break;
	case '*':
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
		break;
	case'/':
		c = a / b;
		cout << a << "/" << b << "=" << c << endl;
		break;
	default:
		cout << "You Have Entered Another Operator" << endl;
	}
	system("pause");
	return 0;
}
