//
// Created by reda ghouzraf on Sun Mar  3 18:01:46 2024
//

#include "MutantStack.hpp"

#include <deque>
#include <iostream>

// template <typename t>
// class Test{
//     public:
//     typedef int myType;
//    static int myVar;
// };

// template <typename t>
// class Dummy{
//     public:
//     typedef  Test<int>::myType __TEST;
// };
int main()
{

    MutantStack<int>a;
    a.push(4);
    a.push(44);
    a.push(444);
    a.push(4444);
    a.push(44444);
    MutantStack<int>::iterator b = a.begin();
    MutantStack<int>::iterator e = a.end();
    for(MutantStack<int>::iterator i = b; i < e; i++){
        std::cout << *i << '\n';
    }
}
