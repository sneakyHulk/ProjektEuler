// Problem 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::cout << "Hello World!\n";

    std::vector<uint64_t> triangle; triangle.reserve(10000000);

    triangle.push_back(1);

    for (unsigned int i = 2; i < 10000000; ++i) {
        triangle.push_back(triangle[i - 2] + i);
    }

    uint32_t sum = 0;

    for (unsigned int i = 0; i < triangle.size(); ++i) {
        for (unsigned int j = 2; j <= triangle[i] / 2 + 1; ++j) {
            if (triangle[i] % j == 0) {
                ++sum;
            }
        }
        //std::cout << sum + 2 << std::endl;

        if (sum + 2 > 500) {
            std::cout << triangle[i] << " -> " << sum + 2 << std::endl;
        }

        sum = 0;
    }

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
