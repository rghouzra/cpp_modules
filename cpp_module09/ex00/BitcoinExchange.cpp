//
// Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
//
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::map<ULL , float> &_db, std::string _inputFileName):db(_db),inputFileName(_inputFileName)
{

}

BitcoinExchange::~BitcoinExchange()
{

}


bool CheckIsValidINputFileFormat(std::ifstream &inputFile){
    std::string head;
    getline(inputFile, head);
    return (head == "date | value");
}

bool checklineFormat(std::string date, std::string value){
    if(date.empty() || value.empty())
        return 0;
    return 1;
}


bool CalculateBitcoinValue(std::string date, std::string value, const std::map<ULL, float>&db){
    ULL serializeddateval = serializedate(date);
    (void)value;
    (void)db;
    std::cout << serializeddateval << '\t' << value << '\n';
    return (serializeddateval != 0);
}

void BitcoinExchange::evalINputFile(){
    std::ifstream inputFile;
    std::string line;

    inputFile.open(inputFileName, std::ifstream::in);
    if(!inputFile.is_open())
        throw std::runtime_error("cant open input file");
    if(!CheckIsValidINputFileFormat(inputFile)){
        throw std::runtime_error("invalid input file format");
    }
    while (1)
    {
        if(!getline(inputFile, line))
            break;
        std::istringstream linestream(line);
        std::string date,value;
        getline(linestream, date,'|');
        getline(linestream, value);
        if(!checklineFormat(date, value))
            goto ERROR;
        if(!CalculateBitcoinValue(date, value, db))
            goto ERROR;
        else
            continue;
        ERROR:
            std::cerr << "Error\n";
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
void read_and_store(std::string dbFileName, std::map<ULL, float> &db){
    std::ifstream dbFile;
    std::string line;

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
        unsigned long long serialized_date = 1;
        serialized_date = serializedate(key);
        if(serialized_date == 0 )
            throw std::runtime_error("invalid date in database");
        db[serialized_date] = atof(value.c_str());
    }
}

void fillDataBase(std::map<ULL, float> &db){
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


//utils
/**********/
unsigned long long serializedate(std::string date){
    std::stringstream datestream(date);
    std::string syear;
    std::string smonth;
    std::string sday;
    long long year;
    long long month;
    long long day;
    getline(datestream, syear,'-');
    getline(datestream, smonth,'-');
    getline(datestream, sday,'-');
    year = atoll(syear.c_str());
    month = atoll(smonth.c_str());
    day = atoll(sday.c_str());
    if ((year > 2025 || year < 1900)|| (month < 1 || month > 12) || ( day >31 || day< 0))
        return 0;
    return ((year * 1000) + (month*100) + (day * 10));
}
