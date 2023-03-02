#include <iostream>

bool isLeapYear(short int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main()
{
    short int year{}, month{}, no_days;

    std::cout << "Enter year: ";
    std::cin >> year;

    if (year < 1)
    {
        std::cout << "Invalid year" << std::endl;
        return 0;
    }

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        no_days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        no_days = 30;
        break;
    case 2:
        no_days = (isLeapYear(year)) ? 29 : 28;
        break;
    default:
        std::cout << "Invalid month" << std::endl;
        return 0;
    }

    std::cout << "No of days: " << no_days << std::endl;

    return 0;
}
