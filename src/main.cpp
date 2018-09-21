#include <iostream>
#include "../include/md5.h"
#include "../include/sha1.h"
#include "../include/sha2.h"
#include "../include/strings.h"

enum string_algorithm {
    MD5,
    SHA1,
    SHA224,
    SHA256,
    SHA384,
    SHA512,
    UNKNOWN
};

string_algorithm convert(std::string alg) {
    if (toUpper(alg) == "MD5") return MD5;
    if (toUpper(alg) == "SHA1") return SHA1;
    if (toUpper(alg) == "SHA224") return SHA224;
    if (toUpper(alg) == "SHA256") return SHA256;
    if (toUpper(alg) == "SHA384") return SHA384;
    if (toUpper(alg) == "SHA512") return SHA512;
    return UNKNOWN;
}

std::string getHash(std::string alg, std::string input)
{
    switch(convert(alg))
    {
        case MD5:
            return md5(input);
        case SHA1:
            return sha1(input);
        case SHA224:
        case SHA256:
        case SHA384:
        case SHA512:
            return sha2(alg, input);
        default:
            return "algorithm is not yet implemented.";
    }
}
 
int main(int argc, char *argv[]) {
    if (argc >= 3)
        std::cout << argv[1] << " of '" << argv[2] << "': " << getHash(argv[1], argv[2]) << std::endl;
    else
        std::cout << "useage: hash [type] [input string]" << std::endl;

    return 0;
}