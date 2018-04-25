#include <iostream>
#include <cmath>
using namespace std;
long hms_to_secs(int &hour, int &min, int &sec) {
	for (int i = 0; i < 1; i++) {
		cout << "Enter to  hour - ";
		cin >> hour;
		cout << "Enter to min - ";
		cin >> min;
		cout << "Enter to sec - ";
		cin >> sec;
		hour *= 3600;
		min *= 60;
		sec += min + hour;
	}
	cout << "Second - " << sec << endl;
	return sec;
}
struct Distance {
	int feet;
	float inches;
};
double power(double n, int p = 2) {
	return pow(n, p);
}
double power(int n, long p, float m, int l = 2) {
	return pow(n, p);
}
int main() {
	int hour, min, sec;
	double x;
	Distance d1, d2;
	cout << "Enter to num - ";
	cin >> x;
	cout << "pow -  " << power(x) << endl;
	hms_to_secs(hour, min, sec);
	cout << endl << "Enter in the Arguments 1 to feet - ";
	cin >> d1.feet;
	cout << endl << "Enter  in the Arguments 1 to inches - ";
	cin >> d1.inches;
	cout << endl << "Enter int the Arguments 2 to feet - ";
	cin >> d2.feet;
	cout << endl << "Enter  in the Arguments 2 to inches - ";
	cin >> d2.inches;
	if (d1.feet < d2.feet)
		cout << "Arguments in the feet 2 more for 1.." << endl;
	else
		cout << "Arguments in the feet 1 more for 2.." << endl;
	if (d1.inches < d2.inches)
		cout << "Arguments in the inches 2 more for 1.." << endl;
	else
		cout << "Arguments in the inches 1 more for 2.." << endl;
	system("pause");
}
