/*Integer partition equations
Problem 207:

For some positive integers k, there exists an integer partition of the form   4t = 2t + k,
where 4t, 2t, and k are all positive integers and t is a real number.

The first two such partitions are 41 = 21 + 2 and 41.5849625... = 21.5849625... + 6.

Partitions where t is also an integer are called perfect.
For any m ≥ 1 let P(m) be the proportion of such partitions that are perfect with k ≤ m.
Thus P(6) = 1/2.

In the following table are listed some values of P(m)

   P(5) = 1/1
   P(10) = 1/2
   P(15) = 2/3
   P(20) = 1/2
   P(25) = 1/2
   P(30) = 2/5
   ...
   P(180) = 1/4
   P(185) = 3/13

Find the smallest m for which P(m) < 1/12345*/
//Problem 207:

#include <iostream>
#include <cmath>
#include <vector>
#include <limits.h>
#include <stdint.h>

static uint32_t log2_custom(uint32_t val) {
    if (val == 1) return 0;
    uint32_t ret = 0;
    while (val > 1) {
        val >>= 1;
        ++ret;
    }
    return ret;
}

int main() {
    uint32_t index = 2U;
    while (true) {
        uint32_t loger = log2_custom(index);
        double portion = (double)loger / (double)(index - 1);
        if (portion < (1.0 / 12345.0)) {
            std::cout << index << std::endl;
            break;
        }
        ++index;
    }

    double exponent = std::log2(index);
    double m = std::pow(4.0, exponent) - std::pow(2.0, exponent);

    std::cout.precision(15);
    std::cout << m << std::endl;
}