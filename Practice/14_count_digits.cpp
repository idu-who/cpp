#include <iostream>

int main()
{
    int number, temp;
    short int count{0};

    std::cout << "Enter a number: ";

    // if input is successful, count digits
    if (std::cin >> number)
    {
        temp = abs(number); // abs to convert negative numbers

        do
        {
            temp /= 10;
            count++;
        } while (temp > 0);

        std::cout << number << " has " << count << " digits." << std::endl;
    }
    else
    {
        std::cout << "Invalid number." << std::endl;
    }

    return 0;
}
