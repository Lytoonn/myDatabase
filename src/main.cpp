#include "database/database.h"
#include "files/filehandler.h"
#include "myFuncs.h"

int main(int argc, char *argv[]) {

    if (argc == 4 && strToUpper(std::string(argv[1])) == "CREATE" && strToUpper(std::string(argv[2])) == "DATABASE")
        createDatabase(argv[3]);
    else
        std::cerr<<"Invalid Syntax to create your database, check the README file for more instructions.";
    
    
    /*         CREATE CSV AND INSERT DATA         */
    // std::string fileName = "test.csv";

    // std::vector<std::vector<std::string>> data = {
    //     {"ID", "Name"},
    //     {"1", "Leo"},
    //     {"2", "Ze"},
    // };

    // std::cout << "Writing data in " << fileName << '\n';
    // writeToCSV(fileName, data);

    // std::vector<std::vector<std::string>> returnData = readFromCSV(fileName);

    // for (const auto& row : returnData){
    //     for (const auto& cell : row){
    //         std::cout << cell << ' ';
    //     }
    //     std::cout << '\n';
    // }

    return 0;
}