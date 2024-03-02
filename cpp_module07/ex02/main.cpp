//
// Created by reda ghouzraf on Sat Mar  2 14:58:30 2024
//
#include "Array.hpp"


void checker(){
    system("leaks Array");
}

int main()
{
    // Your Code
    atexit(checker);
    try{
        int size = 5;
        int size2 = size + 11;
        Array<int> p(size);
        Array<int> p2(p);
        Array<int> p3(size2);


        const int *ptr =p2.getP2elements();


        for(int i = 0; i < size; i++){
        std::cout << ptr[i] << '\n';
        }
        p2 = p3;
        const int *ptr1 =p2.getP2elements();

        for(int i = 0; i < size2; i++){
        std::cout << ptr1[i] << '\n';
        }
        std::cout << "------------\n";
        for(int i = 0; i < size2 + 1; i++){
        std::cout << p2[i] << '\n';
        }
    }
    catch(std::exception &e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}
