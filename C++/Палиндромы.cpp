#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome() {
    std::string palindrome;
    std::getline(std::cin, palindrome);

    palindrome.erase(std::remove_if(palindrome.begin(), palindrome.end(), ::isspace), palindrome.end());

    int left = 0, right = palindrome.size() - 1;

    while (left < right) {
        if (!std::isalnum(palindrome[left])) {
            ++left;
        } else if (!std::isalnum(palindrome[right])) {
            --right;
        } else if (std::tolower(palindrome[left]) != std::tolower(palindrome[right])) {
            return false;
        } else {
            ++left;
            --right;
        }
    }
    return true;
}

int main() {
    if (isPalindrome()) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}