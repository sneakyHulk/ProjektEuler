// Problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

bool ist_palindrom(uint32_t n) {
    uint32_t stellen[10];
    uint32_t size = 0;

    while (n > 0) {
        stellen[size] = n % 10;
        ++size;
        n /= 10;
    }

    for (uint32_t i = 0; i < size / 2; ++i) {
        if (stellen[i] != stellen[size - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << "Hello World!\n";

    uint32_t palindrom = 0;

    for (uint32_t i = 1; i < 10000; ++i) {
        for (uint32_t j = 1; j < 10000; ++j) {
            uint32_t mul = i * j;

            if (ist_palindrom(mul) && palindrom < mul) {
                palindrom = mul;
            }
        }
    }
    
    std::cout << palindrom << std::endl;
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
