#include <iostream>
#include <string>

std::string get_base_n_digit(int remainder) {
    if (remainder < 10) {
        return std::to_string(remainder);
    }

    if (remainder > 35) {
        throw std::invalid_argument("symbol undefined");
    }

    char digit_ascii_code{remainder + 55};  // calculating corresponding uppercase ascii code
    std::string base_n_digit(1, digit_ascii_code);

    return base_n_digit;
}

std::string decimal_to_base_n(int decimal, int n) {
    if (n < 2) {
        throw std::invalid_argument("invalid base");
    }

    std::string base_n_str;

    int remainder;
    do {
        remainder = decimal % n;
        base_n_str = get_base_n_digit(remainder) + base_n_str;
        decimal = (int)decimal / n;
    } while (decimal > 0);

    return base_n_str;
}

std::string recursive_decimal_to_base_n(int decimal, int n) {
    if (n < 2) {
        throw std::invalid_argument("invalid base");
    }

    auto [quotient, remainder] = std::div(decimal, n);
    if (quotient == 0) {
        return get_base_n_digit(remainder);
    }
    std::string base_n_str{recursive_decimal_to_base_n(quotient, n) + get_base_n_digit(remainder)};
    return base_n_str;
}

int main() {
    int num_10, base;
    std::cout << "Enter decimal number and base for the number system you want to convert it to: ";
    std::cin >> num_10 >> base;
    std::cout << num_10 << ": "
              << decimal_to_base_n(num_10, base) << " "
              << recursive_decimal_to_base_n(num_10, base) << std::endl;

    return 0;
}
