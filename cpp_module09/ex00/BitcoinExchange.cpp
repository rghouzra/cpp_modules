//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::map<std::string , float> &_db, std::string _inputFileName):db(_db),inputFileName(_inputFileName)
{

}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange : Destructor Called" << std::endl;
}


bool CheckIsValidINputFileFormat(std::ifstream &inputFile){
    std::string head;

    getline(inputFile, head);
    return (head == "date | value");
}

void BitcoinExchange::evalINputFile(){
    std::ifstream inputFile;

    (void)db;
    inputFile.open(inputFileName, std::ifstream::in);
    if(!inputFile.is_open())
        throw std::runtime_error("cant open input file");
    if(!CheckIsValidINputFileFormat(inputFile)){
        throw std::runtime_error("invalid input file format");
    }

}

/***************************************************************************************************/

/*
    * check filename extension
*/
bool HaveDbExtension(char *FileName, size_t FileNameLength)
{
    (void)FileName;

    int lastindex = FileNameLength;
    int i = lastindex - 4;
    std::string chars ="";
    if(i < 0)
        return false;
    while (i < lastindex)
    {
        chars += FileName[i++];
    }
    return (chars==".csv");
}

bool checkdbformat(std::ifstream &dbfile){
    std::string line;
    getline(dbfile, line);
    return (line == "date,exchange_rate");
}
//"date,exchange_rate"
void read_and_store(std::string dbFileName, std::map<std::string, float> &db){
    std::ifstream dbFile;
    std::string line;
    (void)db;
    dbFile.open(dbFileName, std::ifstream::in);
    if(!dbFile.is_open()){
        throw std::runtime_error("Cant open database file");
    }
    if(!checkdbformat(dbFile))
        throw std::runtime_error("wrong database format");
    while (true)
    {
        if(!getline(dbFile, line))
            break;
        std::istringstream lineStream(line);
        std::string key, value;
        getline(lineStream, key, ',');
        getline(lineStream, value);
        db[key] = atof(value.c_str());
    }
}

void fillDataBase(std::map<std::string, float> &db){
    bool exist = false;
    dirent *currentFile;
    DIR *d = opendir(".");

    if(!d){
        throw std::runtime_error(strerror(errno));
    }
    while ((currentFile = readdir(d)) != NULL)
    {
        if(HaveDbExtension(currentFile->d_name, currentFile->d_namlen)){
            exist = true;
            read_and_store(std::string(currentFile->d_name), db);
        }
    }
    closedir(d);
    if(!exist)
        throw std::runtime_error("no database file in the current directory");
}
