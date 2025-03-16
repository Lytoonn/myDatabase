#include "database/database.h"
#include "files/filehandler.h"
#include "myFuncs.h"

const std::unordered_set<std::string> validCommands = {
    "CREATE", "SELECT", "INSERT", "DELETE", "DROP"
};

int main(int argc, char *argv[]) {

    if (argc < 3){
        std::cerr<<"Invalid Syntax. Check the README for more instructions.\n";
    }

    std::string command = strToUpper(std::string(argv[1]));

    if(!isValidCommand(validCommands, command)){
        std::cerr<<"Error: Unknown command '"<<command<<"'. Check README for more instructions.\n";
        return EXIT_FAILURE;
    }

    if(command == "CREATE"){
        if (argc == 4 && strToUpper(std::string(argv[2])) == "DATABASE")
            createDatabase(argv[3]);
        else if((argc == 4 && strToUpper(std::string(argv[2])) == "TABLE")){}
            // createTable(argv[3] - DATABASE NAME, argv[4] - TABLE NAME) Function
        else
            std::cerr << "Invalid CREATE syntax. Check README for more instructions\n";
    }

    else if(command == "SELECT"){
        
    }

    else if(command == "INSERT"){

    }

    else if(command == "DELETE"){

    }

    else if(command == "DROP"){
        
    }
    
    
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

    return EXIT_SUCCESS;
}