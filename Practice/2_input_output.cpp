#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    char dob[11];

    // Separate inputs

    std::cout << "Enter your name: ";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);  // include spaces

    std::cout << "Enter your age: ";
    std::cin >> age;

    /*
    // Multiple inputs

    std::cout << "Enter name and age: ";
    std::cin >> name >> age;
    */

    // data includes spaces
    std::cout << "Enter date of birth (dd mm yyyy): ";
    std::cin >> std::ws;
    std::cin.getline(dob, 11);

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "You were born on " << dob << "." << std::endl;

    return 0;
}
