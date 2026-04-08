#include <iostream>

using namespace std;

int nth_gp(int n, int a, int r) {
	return a * pow(r, n - 1);
}
/*
int main() {
	int n, a, r;
	cout << "Enter the term number (n), first term (a), and common ratio (r) of the geometric progression: ";
	cout << "n: ";
	cin >> n;
	cin >> a;
	cin >> r;
	cout << "The " << n << "th term of the geometric progression is: " << nth_gp(n, a, r) << endl;
}
*/