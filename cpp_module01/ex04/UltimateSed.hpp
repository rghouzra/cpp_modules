#ifndef ULTIMATESED_HPP
# define ULTIMATESED_HPP
#include <iostream>
#include <fstream>

class UltimateSed
{
private:
	std::ifstream infile;
	std::ofstream outfile;
	std::string oldstring;
	std::string newstring;
public:
	void replace(void);
	UltimateSed(std::string ifname, std::string oldstring, std::string newstring);
	~UltimateSed();
};

#endif