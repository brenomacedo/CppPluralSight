#include <iostream>

void foo(int* a) {

}

int main() {

	int x = 5;

	switch(x) {
		case 1:
			std::cout << "x is 1";
			break;
		case 2:
			std::cout << "x is 2";
			break;
		default:
			std::cout << "neither";
	}

	const int a = 5;
	foo(const_cast<int*>(&a));

	return 0;
}