#include "UltimateSed.hpp"

 UltimateSed::UltimateSed(std::string ifname, std::string originalStr, std::string newStr){
	infile.open(ifname);
	ifname += ".replace";
	outfile.open(ifname);
	oldstring = originalStr;
	newstring = newStr;
}

void UltimateSed::replace(){
	std::string line;
	if(!infile.good() || !outfile.good()){
		std::cerr <<"Error::open: " << std::strerror(errno) <<"\n";
		return ;
	}
	while(std::getline(infile, line, '\0')){
		for (size_t i = 0; line[i]; i++){
			if(line[i] == oldstring[0])
			{
				size_t j = 0, k = 0;
				for (j = 0; line[i + j] && oldstring[j] && line[i+j] == oldstring[j]; j++)
					;
				if(j <= oldstring.size()) {
					for (k = 0; k < newstring.size(); k++){
						line[i+ k] = newstring[k];
					}
					i += oldstring.size();
				}
			}

		}
		outfile <<line;
	}
}

UltimateSed::~UltimateSed(){
	std::cout <<"Destructor is called\n";
	infile.close();
	outfile.close();
}