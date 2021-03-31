// Problem 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

bool is_prime(uint32_t n) {
    for (uint32_t i = 2; i < sqrt(n) + 1; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << "Hello World!\n";

    uint64_t sum = 0;

    for (uint32_t n = 2; n < 2000000; ++n) {
        if (is_prime(n)) {
            sum += n;
        }
    }

    std::cout << sum + 2 << std::endl;
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
