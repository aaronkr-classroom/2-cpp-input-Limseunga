// chapter2_ex9.cpp
#include <iostream>

int main() {
	int num1, num2;

	std::cout << "Enter num1: ";
	std::cin >> num1;
	std::cout << "Enter num2: ";
	std::cin >> num2;

	if (num1 > num2) {
		std::cout << num1 << " > " << num2;
	}
	else {
		std::cout << num2 << " > " << num1;
	}
	return 0;
}