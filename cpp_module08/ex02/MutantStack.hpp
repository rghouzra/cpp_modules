//
// Created by reda ghouzraf on Sun Mar  3 18:01:46 2024
//
#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>

/*
        Some names denote types or templates. In general,
        whenever a name is encountered it is necessary to determine whether that name denotes
        one of these entities before continuing to parse the program that contains it.
        The process that determines this is called name lookup.
*/

template<typename T>
class MutantStack: public std::stack<T>{
    std::deque<T> UnderlyingC;
    public:
    typedef typename std::deque<T>::iterator iterator;

    iterator begin(){
        return  UnderlyingC.begin();
    }

    iterator end(){
        return  UnderlyingC.end();
    }

   void push(const T val){
        UnderlyingC.push_front(val);
    }

    void pop(void){
        UnderlyingC.pop_front();
    }

    const T &top(void){
        return UnderlyingC[0];
    }
    size_t size(void){
        return UnderlyingC.size();
    }



    MutantStack(const MutantStack &obj){
        if(this != &obj){
            this->UnderlyingC = obj.UnderlyingC;
        }
    }
    MutantStack &operator=(const MutantStack &obj){
        if(this != &obj){
            this->UnderlyingC = obj.UnderlyingC;
        }
    }

    MutantStack(){

    }
    ~MutantStack(){

    }
};
#endif /*MutantStack_HPP*/
