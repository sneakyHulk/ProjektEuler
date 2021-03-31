// Problem 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdint.h>
#include <limits>
#include <iostream>

template<typename T>
class max_value {
	static T _max_value;
public:
	void test_value(T const& value, T const& start_value) {
		if (value > _max_value) {
			_max_value = value; std::cout << value << " -> " << start_value << std::endl;
		}
	}

	T get_max_value() {
		return _max_value;
	}
};

template<typename T>
T max_value<T>::_max_value = std::numeric_limits<T>::min();

int main() {
    std::cout << "Hello World!\n";

	max_value<uint32_t> max;

	for (unsigned int start = 1; start < 1000000; ++start) {
		uint64_t n = start;
		uint32_t sum = 0;
		while (n > 1) {
			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = 3 * n + 1;
			}
			++sum;
		}
		max.test_value(sum, start);
	}

	std::cout << max.get_max_value() << std::endl;

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
