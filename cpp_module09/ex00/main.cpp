//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#include "BitcoinExchange.hpp"
#include <dirent.h>

int main(int ac, char **av)
{
    try{
        std::map<std::string, float>db;
        fillDataBase(db);
        std::map<std::string, float>::iterator begin = db.begin();
        std::map<std::string, float>::iterator end = db.end();

        if(ac != 2)
            throw std::runtime_error("Error: you must provide file");
        
    }
    catch(std::exception &e){
        std::cerr << e.what();
    }
    return 0;
}
