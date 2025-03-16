#include "database.h"
#include <iostream>
#include <fstream>
#include <filesystem>

void createDatabase(const std::string& databaseName){
    std::string path = "data\\" + databaseName;
    try{
        if(std::filesystem::create_directory(path)) 
            std::cout<<"Successfully Created Database "<<databaseName<<'\n';
        else 
            std::cout<<"This database already exists.\n";
    } catch(const std::filesystem::filesystem_error& e){
        std::cerr<<"Error creating database: "<<e.what()<<'\n';
    }
    return;
}

// void createTable(const std::string& tableName){
//     std::ofstream file(tableName);
// }

// void insertRecord(const std::string& tableName, const std::vector<std::string>& record){

// }

// void deleteRecord(const std::string& tableName, const std::vector<std::string>& record){

// }

// std::vector<std::string> searchRecord(const std::string& tableName, const std::string& searchTerm){
    
// }