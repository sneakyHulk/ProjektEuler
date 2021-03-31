// Problem 303.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <vector>

bool has_only_worthy_digits(uint64_t n) {
    while (n > 0) {
        if(n % 10 > 2) return false;
        n /= 10;
    }

    return true;
}


uint64_t f(const uint64_t n) {
    uint64_t value = n;
    while (!has_only_worthy_digits(value)) {
        value += n;
    }

    return value;
}

/*
10 * 0 = 0
 0 + 1 = 1
 1 + 1 = 2
10 * 1 = 10
10 + 1 = 11
10 + 2 = 12
10 * 2 = 20
20 + 1 = 21
20 + 2 = 22


*/





const size_t anzahl_sum = 10000;
std::vector<uint64_t> numbers_to_test(anzahl_sum - 1);

uint64_t summe = 0;
void test_numbers(uint64_t number) {
    for (int i = 0; i < numbers_to_test.size(); ++i) {
        if (number % numbers_to_test[i] == 0) {
            summe += number / numbers_to_test[i];
            numbers_to_test.erase(numbers_to_test.begin() + i--);
        }
    }
}

int main() {
    std::cout << "Hello World!\n";  

    for (size_t i = 0; i < anzahl_sum - 1; ++i) {
        numbers_to_test[i] = i + 1;
    }

    //test all numbers:
    uint64_t i                      = 1;
    uint64_t ii                     = 0;
    uint64_t iii                    = 0;
    uint64_t iiii                   = 0;
    uint64_t iiiii                  = 0;
    uint64_t iiiiii                 = 0;
    uint64_t iiiiiii                = 0;
    uint64_t iiiiiiii               = 0;
    uint64_t iiiiiiiii              = 0;
    uint64_t iiiiiiiiii             = 0;
    uint64_t iiiiiiiiiii            = 0;
    uint64_t iiiiiiiiiiii           = 0;
    uint64_t iiiiiiiiiiiii          = 0;
    uint64_t iiiiiiiiiiiiii         = 0;
    uint64_t iiiiiiiiiiiiiii        = 0;
    uint64_t iiiiiiiiiiiiiiii       = 0;
    uint64_t iiiiiiiiiiiiiiiii      = 0;
    uint64_t iiiiiiiiiiiiiiiiii     = 0;
    uint64_t iiiiiiiiiiiiiiiiiii    = 0;
    uint64_t iiiiiiiiiiiiiiiiiiii   = 0;

    for (; iiiiiiiiiiiiiiiiiiii <= 10000000000000000000; iiiiiiiiiiiiiiiiiiii += 10000000000000000000) {
        for (; iiiiiiiiiiiiiiiiiii <= 2000000000000000000; iiiiiiiiiiiiiiiiiii += 1000000000000000000) {
            for (; iiiiiiiiiiiiiiiiii <= 200000000000000000; iiiiiiiiiiiiiiiiii += 100000000000000000) {
                for (; iiiiiiiiiiiiiiiii <= 20000000000000000; iiiiiiiiiiiiiiiii += 10000000000000000) {
                    for (; iiiiiiiiiiiiiiii <= 2000000000000000; iiiiiiiiiiiiiiii += 1000000000000000) {
                        for (; iiiiiiiiiiiiiii <= 200000000000000; iiiiiiiiiiiiiii += 100000000000000) {
                            for (; iiiiiiiiiiiiii <= 20000000000000; iiiiiiiiiiiiii += 10000000000000) {
                                for (; iiiiiiiiiiiii <= 2000000000000; iiiiiiiiiiiii += 1000000000000) {
                                    for (; iiiiiiiiiiii <= 200000000000; iiiiiiiiiiii += 100000000000) {
                                        for (; iiiiiiiiiii <= 20000000000; iiiiiiiiiii += 10000000000) {
                                            for (; iiiiiiiiii <= 2000000000; iiiiiiiiii += 1000000000) {
                                                for (; iiiiiiiii <= 200000000; iiiiiiiii += 100000000) {
                                                    for (; iiiiiiii <= 20000000; iiiiiiii += 10000000) {
                                                        for (; iiiiiii <= 2000000; iiiiiii += 1000000) {
                                                            for (; iiiiii <= 200000; iiiiii += 100000) {
                                                                for (; iiiii <= 20000; iiiii += 10000) {
                                                                    for (; iiii <= 2000; iiii += 1000) {
                                                                        for (; iii <= 200; iii += 100) {
                                                                            for (; ii <= 20; ii += 10) {
                                                                                for (; i <= 2; ++i) {
                                                                                    test_numbers(i + ii + iii + iiii + iiiii + iiiiii + iiiiiii + iiiiiiii + iiiiiiiii + iiiiiiiiii + iiiiiiiiiii + iiiiiiiiiiii + iiiiiiiiiiiii + iiiiiiiiiiiiii + iiiiiiiiiiiiiii + iiiiiiiiiiiiiiii + iiiiiiiiiiiiiiiii + iiiiiiiiiiiiiiiiii + iiiiiiiiiiiiiiiiiii + iiiiiiiiiiiiiiiiiiii);
                                                                                }
                                                                                i = 0;
                                                                            }
                                                                            ii = 0;
                                                                        }
                                                                        iii = 0;
                                                                    }
                                                                    iiii = 0;
                                                                }
                                                                iiiii = 0;
                                                            }
                                                            iiiiii = 0;
                                                        }
                                                        iiiiiii = 0;
                                                    }
                                                    iiiiiiii = 0;
                                                }
                                                iiiiiiiii = 0;
                                            }
                                            iiiiiiiiii = 0;
                                        }
                                        iiiiiiiiiii = 0;
                                    }
                                    iiiiiiiiiiii = 0;
                                }
                                iiiiiiiiiiiii = 0;
                            }
                            iiiiiiiiiiiiii = 0;
                        }
                        iiiiiiiiiiiiiii = 0;
                    }
                    iiiiiiiiiiiiiiii = 0;
                }
                iiiiiiiiiiiiiiiii = 0;
            }
            iiiiiiiiiiiiiiiiii = 0;
        }
        iiiiiiiiiiiiiiiiiii = 0;
    }
    iiiiiiiiiiiiiiiiiiii = 0;

    //................

    std::cout << summe + 1 << std::endl;

    uint64_t sum = 0;
    for (uint64_t n = 1; n < 1000; ++n) {
        sum += f(n) / n;
    }

    std::cout << sum + 1 << std::endl;
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
