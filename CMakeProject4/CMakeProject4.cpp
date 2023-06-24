// CMakeProject4.cpp: определяет точку входа для приложения.
//

#include "CMakeProject4.h"

template <typename T>
T swap(T x, T y) {
	T* z = new T;
	z = x;
	x = y;
	y = z;
	delete z;
}

int main() {
	std::string x = "first";
	std::string y = "second";

	std::cout << x << ", " << y << '\n';

	swap(x, y);

	std::cout << x << ", " << y << '\n';
	std::cout << "smth new!!";
}
