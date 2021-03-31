// Problem 206.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
    std::cout << "Hello World!\n";



    uint64_t start = std::sqrt<uint64_t>(1020304050607080900U);
    uint64_t end = std::sqrt<uint64_t>(1929394959697989990U);
    uint64_t square = 0U;

    constexpr uint64_t test = 1929394959697989990U / 100U;


    for (uint64_t i = start; i < end; ++i) {
        square = i * i;

        if (square % 10 == 0) {
            square /= 100;

            if (square % 10 == 9) {
                square /= 100;

                if (square % 10 == 8) {
                    square /= 100;

                    if (square % 10 == 7) {
                        square /= 100;

                        if (square % 10 == 6) {
                            square /= 100;
                            
                            if (square % 10 == 5) {
                                square /= 100;

                                if (square % 10 == 4) {
                                    square /= 100;

                                    if (square % 10 == 3) {
                                        square /= 100;

                                        if (square % 10 == 2) {
                                            square /= 100;

                                            if (square % 10 == 1) {
                                                square /= 100;

                                                std::cout << i << std::endl;

                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }



    /*
    * 
    *     
    
    uint64_t square = 0U;
    uint64_t test = 0U;
    char buffer[19];
    size_t n_processed = 0U;
    for (char c1 = '0'; c1 <= '9'; ++c1) {
        for (char c2 = '0'; c2 <= '9'; ++c2) {
            for (char c3 = '0'; c3 <= '9'; ++c3) {
                for (char c4 = '0'; c4 <= '9'; ++c4) {
                    for (char c5 = '0'; c5 <= '9'; ++c5) {
                        for (char c6 = '0'; c6 <= '9'; ++c6) {
                            for (char c7 = '0'; c7 <= '9'; ++c7) {
                                for (char c8 = '0'; c8 <= '9'; ++c8) {
                                    for (char c9 = '0'; c9 <= '9'; ++c9) {
                                        std::snprintf(buffer, 19, "1%c2%c3%c4%c5%c6%c7%c8%c9%c0", c1, c2, c3, c4, c5, c6, c7, c8, c9);
                                        test = std::stoull(std::string(buffer), &n_processed);
                                        square = sqrt(test);
                                        square *= square;

                                        if (square == test) {
                                            std::cout << test << std::endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }*/

    
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
