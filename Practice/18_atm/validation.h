#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>
#include <tuple>

std::tuple<bool, std::string> validateUsername(std::string);
std::tuple<bool, std::string> validatePassword(std::string);
std::tuple<bool, std::string> validateName(std::string);

#endif  // VALIDATION_H
