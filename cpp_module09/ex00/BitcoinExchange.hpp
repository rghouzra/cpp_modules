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
#include <time.h>
typedef unsigned long long ULL;

class BitcoinExchange
{
public:
    BitcoinExchange(const std::map<ULL,float> &_db, std::string _inputFileName);
    ~BitcoinExchange();
    void evalINputFile();
private:
    const std::map<ULL , float> &db;
    std::string inputFileName;
};


unsigned long long serializedate(std::string date);
void fillDataBase(std::map<ULL, float> &db);
#endif /*BitcoinExchange_HPP*/
