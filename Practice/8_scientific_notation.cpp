#include <iostream>
#include <iomanip>

int main(){
    double number1 {1.23456e7}; // 12345600
    double number2 {1.2345e-7}; // 0.00000012345
    double number3 {123456789101112}; // 1.23456789101112 * 10^14

    // default precision is 6 digits after the floating/decimal point (mantissa)
    std::cout << std::scientific << "scientific notation:" << std::endl;
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << std::setprecision(14) << number3 << std::endl;

    std::cout << std::setprecision(6); // resetting precision
    std::cout << std::fixed << std::endl << "decimal notation:" << std::endl;
    std::cout << number1 << std::endl;
    std::cout << std::setprecision(11) << number2 << std::endl;
    std::cout << std::setprecision(6) << number3 << std::endl;

    return 0;
}
