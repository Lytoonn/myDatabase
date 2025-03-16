#include "myFuncs.h"
#include <unordered_set>

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

bool isValidCommand(const std::unordered_set<std::string>& validCmds, std::string& cmd){
    return validCmds.find(cmd) != validCmds.end();
}