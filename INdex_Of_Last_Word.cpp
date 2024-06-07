#include <string.h>


int strStr(std::string haystack, std::string needle) {
    size_t found = haystack.find(needle);
    if (found != std::string::npos)
        return found;
    else
        return -1;
}