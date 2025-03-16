#include "files\filehandler.h"

int main() {
    std::string fileName = "test.csv";

    std::vector<std::vector<std::string>> data = {
        {"ID", "Name"},
        {"1", "Leo"},
        {"2", "Ze"},
    };

    std::cout << "Writing data in " << fileName << '\n';
    writeToCSV(fileName, data);

    std::vector<std::vector<std::string>> returnData = readFromCSV(fileName);

    for (const auto& row : returnData){
        for (const auto& cell : row){
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}