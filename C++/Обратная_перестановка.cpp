#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> places(n);
    for (int guest = 1; guest <= n; ++guest) {
        int seat;
        std::cin >> seat;
        places[seat - 1] = guest;
    }

    for (int guest : places) {
        std::cout << guest << " ";
    }
}