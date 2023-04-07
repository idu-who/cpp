#include <iostream>
#include <limits>
#include <string>

auto max_streamsize{std::numeric_limits<std::streamsize>::max()};
short int turn_limit{5};

void clearInputBuffer() {
    // clears entire input buffer, stops on \n character
    std::cin.ignore(max_streamsize, '\n');
}

short int getValidNumber() {
    short int number;
    // take input and validate, repeat until valid input is received
    while (true) {
        // TODO: make single call to clearInputBuffer
        std::cin >> number;
        clearInputBuffer();

        if (std::cin.fail()) {
            // if the input fails, then prompt the user and continue
            std::cin.clear();
            clearInputBuffer();
            std::cout << "Pick a valid integer number: ";
        } else if (number < 1 || number > 100) {
            // if the input is invalid, then prompt the user and continue
            std::cout << "Pick a number between 1 and 100: ";
        } else {
            // if the input is successful and valid, break and return
            break;
        }
    }
    return number;
}

std::string getHint(short int guess, short int solution) {
    if (guess < solution) {
        // return a hint text
        return std::to_string(guess) + " is too \x1B[47mLOW\033[0m.";
    } else {
        return std::to_string(guess) + " is too \x1B[47mHIGH\033[0m.";
    }
}

int main() {
    short int solution, guess;

    std::cout << "\x1B[34m"
              << "Host's Turn"
              << "\033[0m" << std::endl;  // color text using ASCII color codes

    // prompting user and taking valid input
    std::cout << "Pick a number between 1 and 100: ";
    solution = getValidNumber();
    std::cout << "\033[2J\033[1;1H";  // clearing the console

    std::cout << "\x1B[33m"
              << "Guesser's Turn"
              << "\033[0m" << std::endl;
    std::cout << "You have " << turn_limit << " turns to guess correctly." << std::endl;

    // handling guesser's turns
    for (short int turn{0}; turn < turn_limit; turn++) {
        // printing turn number
        std::cout << "\n\x1B[36m"
                  << "Turn " + std::to_string(turn + 1) << "\033[0m" << std::endl;

        // prompting user and taking valid input
        std::cout << "Pick a number between 1 and 100: ";
        guess = getValidNumber();

        if (guess == solution) {
            // checking guess
            // print victory message and exit
            std::cout << "\x1B[32mCongrats! You guessed the number!\033[0m" << std::endl;
            break;
        } else if (turn < turn_limit - 1) {
            // give hint and continue to next turn
            std::cout << "\x1B[31mTry again. " << getHint(guess, solution) << "\033[0m" << std::endl;
        } else {
            // print loss message
            std::cout << "The number was " << solution << ". Better luck next time!" << std::endl;
        }
    }

    return 0;
}
