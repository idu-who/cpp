#include <iostream>
#include <limits>

// https://en.cppreference.com/w/cpp/types/numeric_limits

int main() {
    std::cout << std::boolalpha;
    std::cout << "digits " << std::numeric_limits<unsigned short int>::digits << std::endl;
    std::cout << "is signed " << std::numeric_limits<unsigned short int>::is_signed << std::endl;
    std::cout << "range " << std::numeric_limits<unsigned short int>::min() << " to " << std::numeric_limits<unsigned short int>::max() << std::endl;

    return 0;
}
