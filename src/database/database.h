#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <vector>

void createTable(const std::string& tableName);
void insertRecord(const std::string& tableName, const std::vector<std::string>& record);
void deleteRecord(const std::string& tableName, const std::vector<std::string>& record);
std::vector<std::string> searchRecord(const std::string& tableName, const std::string& searchTerm);

#endif