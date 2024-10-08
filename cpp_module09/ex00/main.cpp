//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#include "BitcoinExchange.hpp"
#include <dirent.h>

int main(int ac, char **av)
{
    try{
        std::map<ULL, float>db;
        fillDataBase(db);
        // std::map<ULL, float>::const_iterator begin = db.begin();
        // std::map<ULL, float>::const_iterator end = db.end();
        // while (begin != end)
        // {
        //     std::cout << begin->first<<'\t' << begin->second << '\n';
        //     begin++;
        // }
        if(ac != 2)
            throw std::runtime_error("Error: you must provide file");
        BitcoinExchange obj(db, av[1]);
        obj.evalINputFile();
    }
    catch(std::exception &e){
        std::cerr << e.what();
    }
    return 0;
}
