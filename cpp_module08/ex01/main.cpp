//
// Created by reda ghouzraf on Sun Mar  3 15:17:30 2024
//
#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(7);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);
        sp.addNumber(117);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what();
    }
return 0;
}
