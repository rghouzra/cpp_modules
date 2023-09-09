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
				while(line[i + k] && oldstring[k] && line[i + k] == oldstring[k])
					k++;
				if(k == oldstring.size()){
					while(newstring[j]){
						line[i + j] = newstring[j];
						j++;
					}
					i += j;
					if(oldstring.size() > newstring.size()){
						line.erase(i, oldstring.size() - newstring.size());
					}
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