#include <iostream>
#include <iomanip>
#include <string>

int main(){
    float float_var {0.12345678901234567890123456789f};
    double double_var {0.12345678901234567890123456789};
    long double long_double_var {0.12345678901234567890123456789L};

    std::cout << std::fixed << std::setprecision(30);

    std::cout << "float" << std::endl;
    std::cout << "size: " << sizeof(float_var) << std::endl;
    std::cout << "value: " << float_var << std::endl;

    std::cout << std::endl << "double" << std::endl;
    std::cout << "size: " << sizeof(double_var) << std::endl;
    std::cout << "value: " << double_var << std::endl;

    std::cout << std::endl << "long double" << std::endl;
    std::cout << "size: " << sizeof(long_double_var) << std::endl;
    std::cout << "value: " << long_double_var << std::endl;

    return 0;
}
