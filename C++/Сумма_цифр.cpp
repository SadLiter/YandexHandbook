#include <iostream>

int main() {
    int number;
    int digit;
    int sum = 0;
    std::cin >> number;
    while (number) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    std::cout << sum;
}