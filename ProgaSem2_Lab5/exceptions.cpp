#include "exceptions.h"

#include <utility>

Exception::Exception(std::string error) : error(std::move(error)) {}

const char *Exception::what() const noexcept {
    return error.c_str();
}