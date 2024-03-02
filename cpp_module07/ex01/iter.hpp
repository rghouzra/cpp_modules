//
// Created by reda ghouzraf on Sat Mar  2 14:27:25 2024
//
#ifndef iter_HPP
#define iter_HPP

#include <iostream>

template <typename type1, typename type2, typename type3>

void iter(type1 *arr, type2 len, void(*ptrf)(type3 x)){
    for (int i = 0; i < len; i++)
    {
        ptrf(arr[i]);
    }
}

#endif /*iter_HPP*/
