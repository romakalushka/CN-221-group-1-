#include"stdafx.h"
#include <iostream>

using namespace std;
int main() 
{
	bool again = true;
	double C, F;
	int write;
	double C1, F2;
	while(again = true){
 cout << "Enter to num : ";
	cin >> write;
	switch (write) {
	case 1: cout << "Enter to *C = ";
		cin >> C;
		F2 = (C / 0.56) + 32;
		cout << "Farangeyt = " << F2 << endl;
		break;
	case 2: cout << "Enter to F = ";
		cin >> F;
		C1 = 0.56*(F - 32);
		cout << "*C = " << C1 << endl;
		break;
	default:
		cout << "enter diferent number";
		if (write == 1 && write == 2) 
			again = true;

		else
			again = false;
	
	}

	}
	}