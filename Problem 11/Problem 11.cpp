// Problem 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

template<typename T>
class max_value {
	static T _max_value;
public:
	void test_value(T const& value) {
		if (value > _max_value) {
			_max_value = value;
		}
	}

	T get_max_value() {
		return _max_value;
	}
};

template<typename T>
T max_value<T>::_max_value = std::numeric_limits<T>::min();

unsigned int test[20][20] = {
	{ 8, 02, 22, 97, 38, 15, 00, 40, 00, 75, 04, 05, 07, 78, 52, 12, 50, 77, 91, 8 },
	{ 49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 04, 56, 62, 00 },
	{ 81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 03, 49, 13, 36, 65 },
	{ 52, 70, 95, 23, 04, 60, 11, 42, 69, 24, 68, 56, 01, 32, 56, 71, 37, 02, 36, 91 },
	{ 22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80 },
	{ 24, 47, 32, 60, 99, 03, 45, 02, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50 },
	{ 32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70 },
	{ 67, 26, 20, 68, 02, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21 },
	{ 24, 55, 58, 05, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72 },
	{ 21, 36, 23, 9, 75, 00, 76, 44, 20, 45, 35, 14, 00, 61, 33, 97, 34, 31, 33, 95 },
	{ 78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 03, 80, 04, 62, 16, 14, 9, 53, 56, 92 },
	{ 16, 39, 05, 42, 96, 35, 31, 47, 55, 58, 88, 24, 00, 17, 54, 24, 36, 29, 85, 57 },
	{ 86, 56, 00, 48, 35, 71, 89, 07, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58 },
	{ 19, 80, 81, 68, 05, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 04, 89, 55, 40 },
	{ 04, 52, 8, 83, 97, 35, 99, 16, 07, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66 },
	{ 88, 36, 68, 87, 57, 62, 20, 72, 03, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69 },
	{ 04, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36 },
	{ 20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 04, 36, 16 },
	{ 20, 73, 35, 29, 78, 31, 90, 01, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 05, 54 },
	{ 01, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 01, 89, 19, 67, 48 }
};

int main() {
	std::cout << "Hello World!\n";

	max_value<unsigned int> tmp;

	// left:
	for (unsigned int i = 0; i < 20; ++i) {
		for (unsigned int j = 0; j < 20 - 4; ++j) {
			tmp.test_value(test[i][j] * test[i][j + 1] * test[i][j + 2] * test[i][j + 3]);
		}
	}

	// down:
	for (unsigned int i = 0; i < 20 - 4; ++i) {
		for (unsigned int j = 0; j < 20; ++j) {
			tmp.test_value(test[i][j] * test[i + 1][j] * test[i + 2][j] * test[i + 3][j]);
		}
	}

	// diagonal:
	for (unsigned int i = 0; i < 20 - 4; ++i) {
		for (unsigned int j = 0; j < 20 - 4; ++j) {
			tmp.test_value(test[i][j] * test[i + 1][j + 1] * test[i + 2][j + 2] * test[i + 3][j + 3]);
		}
	}

	// diagonal2:
	for (int i = 0; i < 20 - 4; ++i) {
		for (int j = 0; j < 20 - 4; ++j) {
			tmp.test_value(test[i][j + 3] * test[i + 1][j + 2] * test[i + 2][j + 1] * test[i + 3][j]);
		}
	}

	std::cout << tmp.get_max_value() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
