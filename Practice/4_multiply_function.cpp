#include <iostream>

int multiplyNumbers(int number_1, int number_2) {
    int prod = number_1 * number_2;
    return prod;
}

int main() {
    int first_number{12};
    int second_number{2};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    std::cout << "Product: " << multiplyNumbers(first_number, second_number) << std::endl;

    return 0;
}
