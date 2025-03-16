#include "filehandler.h"
#include <fstream>
#include <sstream>

void writeToCSV(const std::string& fileName, const std::vector<std::vector<std::string>>& data){
    std::ofstream file(fileName);
    if(!file.is_open()){
        std::cerr << "Error: Couldn't open the file " << fileName << " for writing.\n";
        return;
    }
    
    for(const auto& row : data){
        for (size_t i = 0; i < row.size(); ++i){
            file << row[i];
            if (i < row.size() - 1) file << ",";
        }
        file << "\n";
    }
    file.close();
}

std::vector<std::vector<std::string>> readFromCSV(const std::string& fileName){
    std::vector<std::vector<std::string>> data;
    std::ifstream file(fileName);

    if(!file.is_open()){
        std::cerr << "Error: Couldn't open the file " << fileName << " for writing.\n";
        return data;
    }

    std::string line;
    while(std::getline(file, line)){
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string cell;

        while(std::getline(ss, cell, ',')) row.push_back(cell);

        data.push_back(row);
    }

    file.close();
    return data;
}