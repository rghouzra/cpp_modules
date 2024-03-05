//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <iostream>
#include <map>
#include <dirent.h>
#include <fstream>
class BitcoinExchange
{
public:
    BitcoinExchange();
    ~BitcoinExchange();

private:
};

void fillDataBase(std::map<std::string, float> &db);
#endif /*BitcoinExchange_HPP*/
