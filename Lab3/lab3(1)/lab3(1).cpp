#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a, x, y, res;
	cout << "Enter start sum-" << endl;
	cin >> a;
	cout << "Enter wanted sum" << endl;
	cin >> x;
	cout << "Enter percent-" << endl;
	cin >> y;
	res = (x / a) * y;
	cout << "Years " << res << endl;
	system("pause");
	return 0;
}
