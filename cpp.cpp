#include "cpp.h"
#include <iostream>

using namespace std;

int day(int d, int n) {
	if (n == 0) return d;
	if (d < 0) d+=7;
	return day(d-1, n-1);
}

int main() {
	int d, n;
	cout << "Enter a day d = ";
	cin >> d;

	cout << "Enter n = ";
	cin >> n;

	cout << "The day n days before d is " << day(d, n) << endl;

	return 0;
}