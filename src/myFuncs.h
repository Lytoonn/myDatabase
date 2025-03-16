#ifndef MYFUNCS_H
#define MYFUNCS_H

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <unordered_set>

std::string strToUpper(std::string& str);
bool isValidCommand(const std::unordered_set<std::string>& validCmds, std::string& cmd);

#endif