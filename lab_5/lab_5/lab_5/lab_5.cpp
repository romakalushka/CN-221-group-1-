#include "stdafx.h"
#include<iostream>

using namespace std;



void swap(int*, int*);


int main() {
	int a;
	int b;
	cin >> a >> b;
	cout << "a = " << a << "\t" << "b = " << b << endl;
	swap(a, b);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
    return 0;
}

void swap(int* a, int* b)
{
	int* temp;
	temp = b;
	b = a;
	a = temp;
}
