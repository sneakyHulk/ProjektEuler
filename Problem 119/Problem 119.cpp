// Problem 119.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <vector>
#include <algorithm>

uint8_t get_sum_of_ziffers(uint64_t uint) {
    uint8_t sum = 0U;

    while (uint > 0) {
        sum += uint % 10;
        uint /= 10;
    }

    return sum;
}

std::vector<uint64_t> a_n;

int main() {
    std::cout << "Hello World!\n";

    constexpr uint64_t max = UINT64_MAX / 180U;

    for (uint64_t base = 2U; base <= 180U; ++base) {
        uint64_t number = base;
        do {
            number *= base;

            if (get_sum_of_ziffers(number) == base) {
                //std::cout << number << std::endl;
                a_n.push_back(number);
            }
        } while (number < max);
    }

    std::sort(a_n.begin(), a_n.end());

    int i = 1;
    for (uint64_t number : a_n) {
        std::cout << i++ << ": " << number << std::endl;
    }

    for (uint64_t uint = 0U; uint < 100000U; ++uint) {
        uint64_t base_power = get_sum_of_ziffers(uint);
        if (base_power <= 1) continue;

        uint64_t power = base_power;

        do {
            power *= base_power;
        } while (uint > power);

        if (uint == power) {
            //std::cout << power << std::endl;
        }
    }


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
