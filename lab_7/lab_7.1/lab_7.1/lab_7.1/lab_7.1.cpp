#include "stdafx.h"
#include<iostream>

using namespace std;

template <typename T1,typename T2>
void swaps(T1* a, T2* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}


int main() {
	int a;
	int b;

	cin >> a >> b;
	//int *ptra = &a;
	//int *ptrb = &b;
	
	cout << "a = " << a << "\t" << "b = " << b << endl;

	swaps(&a,&b);

	cout << "a = " << a << "\t" << "b = " << b << endl;
	system("pause");
	return 0;
}

