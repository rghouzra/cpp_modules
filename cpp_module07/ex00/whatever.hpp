//
// Created by reda ghouzraf on Sat Mar  2 11:39:58 2024
//
#ifndef whatever_HPP
#define whatever_HPP

#include <iostream>

template <typename t>


void swap(t &x,t &y){
	t tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename t>
t max(t x,t y){
	return (x > y ? x : y);
}

template <typename t>
t min(t x,t y){
	return (x < y ? x : y);
}

#endif /*whatever_HPP*/
