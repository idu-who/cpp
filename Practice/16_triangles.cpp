#include <iostream>
#include <limits>

auto max_streamsize{std::numeric_limits<std::streamsize>::max()};

void clearInputBuffer()
{
    std::cin.ignore(max_streamsize, '\n');
}

int main()
{

    short int size;
    char symbol;

    std::cout << "Enter size of triangle: ";

    bool is_invalid{true};
    while (is_invalid)
    {
        if (!(std::cin >> size) || size < 0)
        {
            std::cin.clear();
            std::cout << "Enter a valid size: ";
        }
        else
        {
            is_invalid = false;
        }
        clearInputBuffer();
    }

    std::cout << "Enter symbol: ";

    while (true)
    {
        if (!(std::cin >> symbol))
        {
            std::cin.clear();
            std::cout << "Enter a valid symbol: ";
        }
        else
        {
            break;
        }
        clearInputBuffer();
    }

    std::cout << std::endl;

    // triangle
    for (short int i{1}; i <= size; i++)
    {
        for (short int j{1}; j <= i; j++)
        {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // upside-down triangle: decreasing column limit method
    for (short int i{0}; i < size; i++)
    {
        for (short int j{1}; j <= size - i; j++)
        {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // upside-down triangle: reverse row count
    for (short int i{size}; i >= 1; i--)
    {
        for (short int j{1}; j <= i; j++)
        {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
