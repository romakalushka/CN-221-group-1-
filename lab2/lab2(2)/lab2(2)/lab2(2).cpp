#include "stdafx.h"
#include<iostream>
#include<stdlib.h>

using namespace std;


int main()

{

	char operation, again;
	int operand1, operand2;
	double result;
	again = 'y';
	while (again == 'y') {
		cout << "Enter first operand operation and second operand: " << endl;
		cin >> operand1;

		cin >> operation;
		cin >> operand2;

		switch (operation) {
		case '/':
			result = (double)operand1 / operand2;
			break;
		case '*':
			result = (double)operand1*operand2;
			break;
		case '+':
			result = operand1 + operand2;


			break;
		case '-':
			result = operand1 - operand2;
			break;
		default:
			cout << "we cant do this operation" << endl;
			break;
		}
		cout << "Your result = " << result << endl;
		cout << "Again?" << endl;
		cin >> again;
	}
	system("pause");
	return 0;
}

