#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <vector>

void writeToCSV(const std::string& fileName, const std::vector<std::vector<std::string>>& data);
std::vector<std::vector<std::string>> readFromCSV(const std::string& fileName);

#endif