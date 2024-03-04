//
// Created by reda ghouzraf on Sun Mar  3 15:17:30 2024
//
#include "Span.hpp"


int main()
{
    try{
        Span sp = Span(10);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);
        sp.addNumber(117);
        std::vector<int>tab(3, 666);
        std::cout <<  sp.getArray().size() << '\t' <<  sp.getArray().capacity() <<'\n';
        sp.addMultipleNUmbers(tab.begin(),tab.end());
        for(unsigned int i = 0; i < sp.getArray().size(); i++){
            std::cout << sp.getArray()[i] << '\n';
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what();
    }
return 0;
}
