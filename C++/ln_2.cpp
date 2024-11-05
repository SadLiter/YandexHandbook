#include <iostream>

int main() {
    int n;
    double sum = 0.0;
    int sign = 1;
    std::cin >> n;

    for (double i = 1; i <= n; ++i) {
        sum += sign / i;
        sign = -sign;
    }

    std::cout << sum;
}