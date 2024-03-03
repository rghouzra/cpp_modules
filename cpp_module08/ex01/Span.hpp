//
// Created by reda ghouzraf on Sun Mar  3 15:17:30 2024
//
#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <vector>
#include <set>

class Span
{
private:
    unsigned int _N;
    std::vector<int>arr;
public:
    Span(unsigned int N);
    Span(const Span& obj);
    ~Span();
    Span& operator=(const Span& obj);
    const std::vector<int> &getArray() const;
    void addNumber(int nbr);
    void addMultipleNUmbers(std::vector<int>::iterator begin,std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

};
#endif /*Span_HPP*/
