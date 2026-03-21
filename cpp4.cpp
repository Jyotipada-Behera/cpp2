#include <iostream>

int nth_term(int a, int d, int n) {
	return a + (n - 1) * d;
}
/*
int main() {
	int a, d, n;
	std::cout << "Enter the first term (a), common difference (d), and number ";
	std::cout << "of terms (n) for the arithmetic progression: ";
	std::cin >> a >> d >> n;
	std::cout << "The " << n << "th term of the arithmetic progression is: ";
	std::cout << nth_term(a, d, n) << std::endl;
}*/