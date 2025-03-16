#include "myFuncs.h"

std::string strToUpper(std::string& str){
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return std::toupper(c);
    });
    return str;
}

std::string strToLower(std::string& str){
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
        return std::tolower(c);
    });
    return str;
}