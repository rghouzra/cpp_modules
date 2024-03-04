//
// Created by reda ghouzraf on Sun Mar  3 18:01:46 2024
//
#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>


// class MutantStack
// {
// public:
//     MutantStack();
//     MutantStack(const MutantStack& obj);
//     ~MutantStack();
//     MutantStack& operator=(const MutantStack& obj);

// private:
// };

template<typename T>
class MutantStack{
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
};


#endif /*MutantStack_HPP*/
