#include <iostream>
#include <string>

int main() {
    int number, temp;
    std::string reverse_number;  // using string to be able to store leading zero
    short int digit;

    std::cout << "Enter a number: ";

    if (std::cin >> number) {
        // if input is successful, reverse number
        temp = abs(number);  // abs to convert negative numbers

        do {
            digit = temp % 10;
            reverse_number += std::to_string(digit);
            temp /= 10;
        } while (temp > 0);

        if (number < 0) {
            reverse_number += '-';
        }

        std::cout << "Reverse of " << number << " is " << reverse_number << std::endl;
    } else {
        std::cout << "Invalid number." << std::endl;
    }

    return 0;
}
