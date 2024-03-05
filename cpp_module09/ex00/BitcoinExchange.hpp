//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <map>
#include <dirent.h>
#include <fstream>
#include <sstream>
class BitcoinExchange
{
public:
    BitcoinExchange(const std::map<std::string,float> &_db, std::string _inputFileName);
    ~BitcoinExchange();
    void eval();
private:
    const std::map<std::string , float> &db;
    std::string inputFileName;
};

void fillDataBase(std::map<std::string, float> &db);
#endif /*BitcoinExchange_HPP*/
