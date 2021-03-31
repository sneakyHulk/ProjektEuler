// ProjektEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

int main() {
    std::cout << "Hello World!\n";

    uint64_t erg_sum_squares = 0U;
    uint64_t erg_squares_of_sum = 0U;

    for (uint64_t n = 1U; n <= 100U; ++n) {
        erg_sum_squares += n * n;
    }

    for (uint64_t n = 1U; n <= 100U; ++n) {
        erg_squares_of_sum += n;
    }

    erg_squares_of_sum = erg_squares_of_sum * erg_squares_of_sum;

    std::cout << "Sum of squares: '" << erg_sum_squares << "'." << std::endl;
    std::cout << "Square of sum: '" << erg_squares_of_sum << "'." << std::endl;

    uint64_t difference = erg_squares_of_sum - erg_sum_squares;

    std::cout << "Difference: '" << difference << "'." << std::endl;


    return 0;
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
