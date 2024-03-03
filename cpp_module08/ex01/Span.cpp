//
// Created by reda ghouzraf on Sun Mar  3 15:17:30 2024
//
#include "Span.hpp"

Span::Span(unsigned int N):_N(N)
{
    arr.reserve(_N);
}

Span::~Span()
{

}

Span::Span(const Span& obj)
{

    if (this != &obj)
        *this = obj;
}

Span& Span::operator=(const Span& obj)
{

    if (this != &obj)
    {
        this->arr = obj.arr;
        this->arr.reserve( obj.arr.capacity());
        this->_N = obj._N;
    }
    return (*this);
}

const std::vector<int> &Span::getArray()const{
    return this->arr;
}

void Span::addNumber(int nbr){
    if(this->arr.size() < this->arr.capacity())
    {
        arr.push_back(nbr);
        return ;
    }
    throw std::runtime_error("size is too large");
}

void Span::addMultipleNUmbers(std::vector<int>::iterator begin,std::vector<int>::iterator end){
    // if(!p)
    //     throw std::runtime_error("invalid address");
    // if(size + arr.size() <= arr.capacity()){
    arr.insert(arr.end(),begin , end);
        return ;
    // }
    throw std::runtime_error("size is too large");
}

int Span::longestSpan(){
    std::vector<int>::iterator begin;
    std::vector<int>::iterator end;
    int min;
    int max;

    if(arr.size() < 2)
        throw std::runtime_error("no span");
    end = arr.end();
    begin = arr.begin();
    max = *std::max_element(begin, end);
    min = *std::min_element(begin, end);
    return (max - min);
}

int solve(const std::vector<int> &arr){
    std::set<int>spans;
    for(size_t i = 0; i < arr.size(); i++){
        for(size_t j = i + 1; j < arr.size(); j++){
            spans.insert(abs(arr[i] - arr[j]));
        }
    }
    return *spans.begin();
}



int Span::shortestSpan(){
    if(arr.size() < 2)
        throw std::runtime_error("no span");
    return solve(arr);
}
