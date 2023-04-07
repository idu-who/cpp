#include <cmath>
#include <iomanip>
#include <iostream>

int range(int size_in_bytes, bool is_signed) {
    int size_in_bits{size_in_bytes * 8};
    long int min_range{0};
    double max_range{};
    if (is_signed) {
        min_range = -std::pow(2, size_in_bits - 1);
        max_range = -min_range - 1;
    } else {
        max_range = std::pow(2, size_in_bits) - 1;
    }
    std::cout << "range: " << min_range << " to " << std::fixed << std::setprecision(0) << max_range << std::endl;
    return 0;
}

int main() {
    short short_var;
    short int short_int_var;
    signed short signed_short_var;
    signed short int signed_short_int_var;
    unsigned short unsigned_short_var;
    unsigned short int unsigned_short_int_var;

    std::cout << "\nshort" << std::endl;
    std::cout << "size: " << sizeof(short_var) << std::endl;
    range(sizeof(short_var), true);

    std::cout << "\nshort int" << std::endl;
    std::cout << "size: " << sizeof(short_int_var) << std::endl;
    range(sizeof(short_int_var), true);

    std::cout << "\nsigned short" << std::endl;
    std::cout << "size: " << sizeof(signed_short_var) << std::endl;
    range(sizeof(signed_short_var), true);

    std::cout << "\nsigned short int" << std::endl;
    std::cout << "size: " << sizeof(signed_short_int_var) << std::endl;
    range(sizeof(signed_short_int_var), true);

    std::cout << "\nunsigned short" << std::endl;
    std::cout << "size: " << sizeof(unsigned_short_var) << std::endl;
    range(sizeof(unsigned_short_var), false);

    std::cout << "\nunsigned short int" << std::endl;
    std::cout << "size: " << sizeof(unsigned_short_int_var) << std::endl;
    range(sizeof(unsigned_short_int_var), false);

    int int_var;
    signed signed_var;
    signed int signed_int_var;
    unsigned unsigned_var;
    unsigned int unsigned_int_var;

    std::cout << "\nint" << std::endl;
    std::cout << "size: " << sizeof(int_var) << std::endl;
    range(sizeof(int_var), true);

    std::cout << "\nsigned" << std::endl;
    std::cout << "size: " << sizeof(signed_var) << std::endl;
    range(sizeof(signed_var), true);

    std::cout << "\nsigned int" << std::endl;
    std::cout << "size: " << sizeof(signed_int_var) << std::endl;
    range(sizeof(signed_int_var), true);

    std::cout << "\nunsigned" << std::endl;
    std::cout << "size: " << sizeof(unsigned_var) << std::endl;
    range(sizeof(unsigned_var), false);

    std::cout << "\nunsigned int" << std::endl;
    std::cout << "size: " << sizeof(unsigned_int_var) << std::endl;
    range(sizeof(unsigned_int_var), false);

    long long_var;
    long int long_int_var;
    signed long singed_long_var;
    signed long int singed_long_int_var;
    unsigned long unsigned_long_var;
    unsigned long int unsigned_long_int_var;

    std::cout << "\nlong" << std::endl;
    std::cout << "size: " << sizeof(long_var) << std::endl;
    range(sizeof(long_var), true);

    std::cout << "\nlong int" << std::endl;
    std::cout << "size: " << sizeof(long_int_var) << std::endl;
    range(sizeof(long_int_var), true);

    std::cout << "\nsinged long" << std::endl;
    std::cout << "size: " << sizeof(singed_long_var) << std::endl;
    range(sizeof(singed_long_var), true);

    std::cout << "\nsinged long int" << std::endl;
    std::cout << "size: " << sizeof(singed_long_int_var) << std::endl;
    range(sizeof(singed_long_int_var), true);

    std::cout << "\nunsigned long" << std::endl;
    std::cout << "size: " << sizeof(unsigned_long_var) << std::endl;
    range(sizeof(unsigned_long_var), false);

    std::cout << "\nunsigned long int" << std::endl;
    std::cout << "size: " << sizeof(unsigned_long_int_var) << std::endl;
    range(sizeof(unsigned_long_int_var), false);

    long long long_long_var;
    long long int long_long_int_var;
    signed long long signed_long_long_var;
    signed long long int signed_long_long_int_var;
    unsigned long long unsigned_long_long_var;
    unsigned long long int unsigned_long_long_int_var;

    std::cout << "\nlong long" << std::endl;
    std::cout << "size: " << sizeof(long_long_var) << std::endl;
    range(sizeof(long_long_var), true);

    std::cout << "\nlong long int" << std::endl;
    std::cout << "size: " << sizeof(long_long_int_var) << std::endl;
    range(sizeof(long_long_int_var), true);

    std::cout << "\nsigned long long" << std::endl;
    std::cout << "size: " << sizeof(signed_long_long_var) << std::endl;
    range(sizeof(signed_long_long_var), true);

    std::cout << "\nsigned long long int" << std::endl;
    std::cout << "size: " << sizeof(signed_long_long_int_var) << std::endl;
    range(sizeof(signed_long_long_int_var), true);

    std::cout << "\nunsigned long long" << std::endl;
    std::cout << "size: " << sizeof(unsigned_long_long_var) << std::endl;
    range(sizeof(unsigned_long_long_var), false);

    std::cout << "\nunsigned long long int" << std::endl;
    std::cout << "size: " << sizeof(unsigned_long_long_int_var) << std::endl;
    range(sizeof(unsigned_long_long_int_var), false);

    return 0;
}
