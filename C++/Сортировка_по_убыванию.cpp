#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> lines;

    std::string line;

    while (std::getline(std::cin, line)) {
        lines.push_back(line);
    }

    std::sort(lines.rbegin(), lines.rend());
    
    for (std::string line : lines) {
        std::cout << line << "\n";
    }
}