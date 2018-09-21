#ifndef TEO_SHA2_H
#define TEO_SHA2_H
#include <string>
#include "sha224.h"
#include "sha256.h"
#include "sha384.h"
#include "sha512.h"

std::string sha2(std::string type, std::string input);

std::string sha224(std::string input);
std::string sha256(std::string input);
std::string sha384(std::string input);
std::string sha512(std::string input);

#endif