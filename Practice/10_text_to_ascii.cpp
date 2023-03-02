#include <iostream>
#include <string>

int main(){
    std::string text;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << "\nASCII encoded text" << std::endl;

    for (short int index {0}; index < text.length(); index++)
    {
        std::cout << int(text[index]) << " ";
    }

    std::cout << std::endl;

    return 0;
}
