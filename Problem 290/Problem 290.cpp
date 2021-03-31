// Problem 290.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <vector>
#include <limits>

template<typename T>
class max_value {
    static T _max_value;
public:
    void test_value(T const& value) {
        if (value > _max_value) {
            _max_value = value;
        }
    }

    T get_max_value() {
        return _max_value;
    }
};

template<typename T>
T max_value<T>::_max_value = std::numeric_limits<T>::min();


uint8_t get_sum_of_ziffers(uint64_t uint) {
    uint8_t sum = 0U;

    while (uint > 0) {
        sum += uint % 10;
        uint /= 10;
    }

    return sum;
}

constexpr unsigned int cache_size = (18 + 1) * 137 * (2 * 116 + 1);

uint64_t cache[cache_size];

static max_value<uint32_t> tmp;

uint64_t recursive_search_of_numbers(uint8_t potenz, uint32_t u = 0U, int32_t v = 0) {
    uint64_t result = 0U;

    tmp.test_value(u);

    uint32_t cache_id = (potenz * 137 + u) * 233 + v + 116;

    if (cache[cache_id] != UINT64_MAX) {
        return cache[cache_id];
    }

    if (potenz == 1) {
        for (uint64_t ziffer = 0; ziffer <= 9; ++ziffer) {
            if (get_sum_of_ziffers(137U * ziffer + u) + v == ziffer) {
                result++;
            }
        }

        cache[cache_id] = result;
        return result;
    }

    for (uint64_t ziffer = 0; ziffer <= 9; ++ziffer) {
        uint64_t value_1 = (137U * ziffer + u) / 10U;
        int64_t value_2 = (137U * ziffer + u) % 10U + v - ziffer;

        result += recursive_search_of_numbers(potenz - 1, value_1, value_2);
    }

    cache[cache_id] = result;
    return result;
}

int main() {
    //std::cout << "Hello World!\n";

    for (unsigned int i = 0; i < cache_size; ++i) {
        cache[i] = UINT64_MAX;
    }

    std::cout << recursive_search_of_numbers(18) << std::endl;

    unsigned int anzahl = 0U;
    for (unsigned int i = 0U; i < cache_size; ++i) {
        if (cache[i] != UINT64_MAX) {
            //std::cout << cache[i] << '\n';
            anzahl++;
        }
    }
    std::cout << anzahl << '\n';
    std::cout << tmp.get_max_value() << '\n';


    //uint64_t anzahl = 0U;

    for (uint64_t i = 0; i <= 100000000000U; i += 9) { // 17 nullen 100000000000000000U
        uint8_t a = get_sum_of_ziffers(i);
        uint8_t b = get_sum_of_ziffers(i * 137);

        if (a == b) {
           // ++anzahl;
        }
    }

    //std::cout << anzahl << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// 9    , 90    , 99    , 198   , 279   , 369   , 387   , 396   , 468   , 549   , 585   , 657   , 666
// 1 * 9, 10 * 9, 11 * 9, 22 * 9, 31 * 9, 41 * 9, 43 * 9, 44 * 9, 52 * 9, 61 * 9, 65 * 9, 73 * 9, 74 * 9

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
