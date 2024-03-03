//
// Created by reda ghouzraf on Sat Mar  2 20:53:10 2024
//
#ifndef easyfind_HPP
#define easyfind_HPP

#include <iostream>
#include <vector>

template<typename T, typename type2>

int easyfind(T data, type2 to_find){
	if(std::find(data.begin(), data.end(), to_find) != data.end())
	{
		return 0;
	}
	return 1;
}

#endif /*easyfind_HPP*/
