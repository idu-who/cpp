#include <iostream>

long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;

    std::cout << "Enter a non-negative integer number: ";
    std::cin >> num;

    if (std::cin.fail() || num < 0)
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    std::cout << num << "! = " << factorial(num) << std::endl;

    return 0;
}
