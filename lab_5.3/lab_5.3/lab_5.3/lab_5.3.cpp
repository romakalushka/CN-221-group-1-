#include "stdafx.h"
#include<iostream>

using namespace std;

struct Distance
{
	int a;
	int b;
};


bool IsBigger(int, int);

int main()
{
	Distance x, y;

	cin >> x.a >> y.b;
	cout << IsBigger(x.a, y.b) << endl;

	system("pause");
    return 0;
}

bool IsBigger(int x, int y)
{
	if (x >= y) 

		return true;
	
	else
		return false;
}