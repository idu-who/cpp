#include <iostream>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    } else {
        for (int i{2}; i <= number / 2; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    short int n, count{0};

    std::cout << "Enter how many prime numbers to print: ";
    if (std::cin >> n) {
        for (short int i{1}; count < n; i++) {
            if (isPrime(i)) {
                std::cout << i << " ";
                count++;
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid number." << std::endl;
    }

    return 0;
}
