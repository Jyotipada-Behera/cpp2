#include "cpp2.h"
#include <iostream>

using namespace std;

int lastDigit(int num) {
	if (num < 0) num *= -1;
	return num % 10;
}

/*
int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	cout << "The last digit of " << num << " is: " << lastDigit(num) << endl;

	return 0;
}
*/