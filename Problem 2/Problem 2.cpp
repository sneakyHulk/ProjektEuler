// Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

int main() {
    std::cout << "Hello World!\n";

    uint32_t max = 4000000;

    uint32_t current = 1;
    uint32_t current_before = 1;

    uint32_t sum = 0;

    while (current < 4000000) {
        if (current % 2 == 0) {
            sum += current;
        }

        uint32_t tmp = current;
        current += current_before;
        current_before = tmp;
    }

    std::cout << sum << std::endl;
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
