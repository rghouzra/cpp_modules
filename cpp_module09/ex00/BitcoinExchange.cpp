//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange : Default Constructor Called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange : Destructor Called" << std::endl;
}

bool HaveDbExtension(char *FileName, size_t FileNameLength)
{
    (void)FileName;
    int lastindex = FileNameLength - 1;
    int i = lastindex - 4;
    std::string chars ="";
    if(i < 0)
        return false;
    while (i < lastindex)
    {
        // chars +
    }
    return true;
}

void fillDataBase(std::map<std::string, float> &db){
    DIR *d = opendir(".");
    (void)db;
    if(!d)
        throw std::runtime_error(strerror(errno));
    dirent *currentFile;
    while ((currentFile = readdir(d)) != NULL)
    {
        if(HaveDbExtension(currentFile->d_name, currentFile->d_namlen)){
            // fillMap(db )
        }
    }
    closedir(d);
}
