/*Smallest multiple
Problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <iostream>

int main() {
    uint32_t n = 1U;

    while (true) {
        if (n % 20 == 0 && n % 19 == 0 && n % 18 == 0 && n % 17 == 0 && n % 16 == 0 && n % 15 == 0 && n % 14 == 0 && n % 13 == 0 && n % 12 == 0
            && n % 11 == 0) {
            std::cout << "Nummer: '" << n << "'." << std::endl;
        }
        ++n;
    }
}

/*20 4, 5, 10

19

18 9, 3

17

16, 8

15, 5, 3

14, 7, 2

13

12, 6, 2

11*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
