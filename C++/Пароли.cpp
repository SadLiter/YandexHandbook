#include <iostream>
#include <cctype>

int main() {
    std::string password;
    std::cin >> password;
    int upperCase_flag = 0,
    digit_flag = 0, 
    lowerCase_flag = 0, 
    other_flag = 0,
    continue_flag = 1;

    for (char symbol : password) {
        if (symbol < 33 || symbol > 126) {
            std::cout << "NO";
            continue_flag = 0;
            break;
        }
        if (isdigit(symbol)) { digit_flag = 1; }
        else if (isupper(symbol)) { upperCase_flag = 1; }
        else if (islower(symbol)) { lowerCase_flag = 1; }
        else { other_flag = 1; }
    }
    if (continue_flag){
        if (password.length() < 8 || password.length() > 14) {
            std::cout << "NO";
        }
        else if ((upperCase_flag + digit_flag + lowerCase_flag + other_flag) >= 3) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }
    }
}