#include <iostream>
#include <cstdint>

int main() {
    std::uint64_t n = 0;
    std::cin >> n;
    std::cout << n * (n + 1) / 2 << "\n";
}