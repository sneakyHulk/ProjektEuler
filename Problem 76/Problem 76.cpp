// Problem 76.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

uint64_t fib(uint32_t number) {
    if (number == 0) {
        return 0U;
    }
    if (number == 1) {
        return 0U;
    }
    if (number == 2) {
        return 1U;
    }
    if (number == 3) {
        return 2U;
    }
    if (number == 4) {
        return 4U;
    }

    return fib(number - 1) + fib(number - 2);
}

int main() {
    std::cout << "Hello World!\n";

    std::cout << fib(6U) << std::endl;
}

/*2 -> 1
3 -> 2
4 -> 4
5 -> 6
6 -> 10
7 -> 14

2 + 1
1 + 1 + 1

3 + 1
2 + 2
2 + 1 + 1
1 + 1 + 1 + 1

4 + 1
3 + 2
3 + 1 + 1
2 + 2 + 1
2 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1

------------------- 1: 0 + 1
5 + 1
------------------- 2: 1 + 1
4 + 2
4 + 1 + 1
------------------- 3: 2 + 1
3 + 3
3 + 2 + 1
3 + 1 + 1 + 1
------------------- 4: 4 - 1
2 + 2 + 2
2 + 2 + 1 + 1
2 + 1 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1

------------------- 1: 0 + 1
6 + 1
------------------- 2: 1 + 1
5 + 2
5 + 1 + 1
------------------- 3: 2 + 1
4 + 3
4 + 2 + 1
4 + 1 + 1
------------------- 4: 4
3 + 3 + 1
3 + 2 + 2
3 + 2 + 1 + 1
3 + 1 + 1 + 1 + 1
------------------- 5: 6 - 3
2 + 2 + 2 + 1
2 + 2 + 1 + 1 + 1
2 + 1 + 1 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1 + 1 + 1

7 + 1
6 + 2
6 + 1 + 1
5 + 3
5 + 2 + 1
5 + 1 + 1 + 1
4 + 4
4 + 3 + 1
4 + 2 + 2
4 + 2 + 1 + 1
4 + 1 + 1 + 1 + 1
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
