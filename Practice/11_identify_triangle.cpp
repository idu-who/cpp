#include <iostream>
#include <limits>

auto max_streamsize{std::numeric_limits<std::streamsize>::max()};

void clearInputBuffer()
{
    std::cin.ignore(max_streamsize, '\n');
}

float getInput(char side_no)
{
    float input_val;
    // TODO: make single call to clearInputBuffer
    std::cin >> input_val;
    clearInputBuffer();

    if (std::cin.fail())
    {
        std::cin.clear();
        clearInputBuffer();
        std::cout << "Enter a number for length of side " << side_no << " : ";
        input_val = getInput(side_no);
    }
    else if (!(input_val > 0))
    {
        std::cout << "Enter a positive number for length of side " << side_no << " : ";
        input_val = getInput(side_no);
    }

    return input_val;
}

bool isValidTriangle(short int side_1, short int side_2, short int side_3)
{
    return (side_1 + side_2 > side_3) && (side_2 + side_3 > side_1) && (side_3 + side_1 > side_2);
}

int main()
{
    float side_1, side_2, side_3;

    std::cout << "Enter length of 3 sides of a triangle (as positive numbers)" << std::endl;
    std::cout << "Enter length of side 1: ";
    side_1 = getInput('1');
    std::cout << "Enter length of side 2: ";
    side_2 = getInput('2');
    std::cout << "Enter length of side 3: ";
    side_3 = getInput('3');

    std::cout << side_1 << " " << side_2 << " " << side_3 << std::endl;

    std::cout << "\nResult: ";
    if (isValidTriangle(side_1, side_2, side_3))
    {
        if (side_1 == side_2 && side_2 == side_3)
        {
            std::cout << "equilateral triangle" << std::endl;
        }
        else if (side_1 == side_2 || side_2 == side_3 || side_3 == side_1)
        {
            std::cout << "isosceles triangle" << std::endl;
        }
        else
        {
            std::cout << "scalene triangle" << std::endl;
        }
    }
    else
    {
        std::cout << "not a triangle" << std::endl;
    }

    return 0;
}
