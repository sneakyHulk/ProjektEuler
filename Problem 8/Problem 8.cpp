// Problem 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <string>

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

constexpr unsigned char numbers[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

uint64_t get_number(unsigned int index) {
    return numbers[index] - '0';
}

int main() {
    std::cout << "Hello World!\n";

    max_value<uint64_t> tmp;

    for (int i = 0; i < 1000 - 13; ++i) {
        tmp.test_value(get_number(i) * get_number(i + 1) * get_number(i + 2) * get_number(i + 3) * get_number(i + 4) * get_number(i + 5) * get_number(i + 6) * get_number(i + 7) * get_number(i + 8) * get_number(i + 9) * get_number(i + 10) * get_number(i + 11) * get_number(i + 12));
    }

    std::cout << tmp.get_max_value() << std::endl;
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
