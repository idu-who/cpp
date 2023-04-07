#include "validation.h"

#include <regex>
#include <string>
#include <tuple>

std::tuple<bool, std::string> validateUsername(std::string username) {
    // return whether username is valid and the error_message if any
    bool is_valid{true};
    std::string error_message;
    auto length{username.length()};

    if (length < 3 || length > 20) {
        is_valid = false;
        error_message = "username should be between 3 and 20 characters in length.\n";
    }

    std::regex username_regex("^[a-z\\d]+$");

    if (!std::regex_match(username, username_regex)) {
        is_valid = false;
        error_message += "username should contain only lowercase letters and digits.\n";
    }

    return {is_valid, error_message};
}

std::tuple<bool, std::string> validatePassword(std::string password) {
    // return whether password is valid and the error_message if any
    bool is_valid{true};
    std::string error_message;
    auto length{password.length()};

    if (length < 8 || length > 20) {
        is_valid = false;
        error_message = "password should be between 8 and 20 characters in length.\n";
    }

    std::regex password_regex("^[^\\s,\"]+$");

    if (!std::regex_match(password, password_regex)) {
        is_valid = false;
        error_message += "password should cannot contain whitespace, comma or double quote characters.\n";
    }

    return {is_valid, error_message};
}

std::tuple<bool, std::string> validateName(std::string name) {
    // return whether name is valid and the error_message if any
    bool is_valid{true};
    std::string error_message;

    if (name.length() > 25) {
        is_valid = false;
        error_message = "name should be less than 25 characters in length.\n";
    }

    std::regex name_regex("^[\\w \'\\.]+$");

    if (!std::regex_match(name, name_regex)) {
        is_valid = false;
        error_message += "name should contain only letters, spaces, . and '.\n";
    }

    return {is_valid, error_message};
}
