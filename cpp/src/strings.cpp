#include "../include/strings.h"

std::string toUpper(std::string& input) {
    std::string output = input;
    for (std::string::size_type i = 0; i < input.length(); ++i)
        output[i] = std::toupper(input[i]);
    return output;
}

std::string toLower(std::string& input) {
    std::string output = input;
    for (std::string::size_type i = 0; i < input.length(); ++i)
        output[i] = std::tolower(input[i]);
    return output;
}