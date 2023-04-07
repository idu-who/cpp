#include <iostream>

int addNumbers(int number_1, int number_2) {
    int sum = number_1 + number_2;
    return sum;
}

int main() {
    int first_number{10};
    int second_number{15};

    std::cout << "First Number: " << first_number << std::endl;
    std::cout << "Second Number: " << second_number << std::endl;

    std::cout << "Sum: " << addNumbers(first_number, second_number) << std::endl;

    return 0;
}
