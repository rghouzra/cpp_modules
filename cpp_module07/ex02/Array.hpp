//
// Created by reda ghouzraf on Sat Mar  2 14:58:30 2024
//
#ifndef Array_HPP
#define Array_HPP

#include <iostream>


template<typename T>
class Array
{
public:
	const T *getP2elements() const{
		return p;
	}
	unsigned int size() const{
		return __size;
	}
	Array()
	{
		p = NULL;
		__size = 0;
	}
	Array(unsigned int n)
	{
		__size  = n;
		p = new T[n];
		for(unsigned int i = 0; i < __size;i++)
			p[i] = i;
	}
	Array(const Array &obj)
	{
		if(this != &obj){
			unsigned int _size = obj.size();
			p = new T[_size];
			__size = _size;
			for(unsigned int i = 0; i < _size ; i++)
				this->p[i] = obj.p[i];
		}
	}

	Array &operator=(const Array &obj){
		if(this != &obj){
			unsigned int _size = obj.size();
			delete []this->p;
			this->p = new T[_size];
			__size = _size;
			for (unsigned int i = 0; i < _size; i++)
			{
				this->p[i] = obj.p[i];
			}
		}
		return *this;
	}
	T &operator[](unsigned int index){
		if(index < __size){
			return this->p[index];
		}
		throw std::runtime_error("out of bounds");
	}
	~Array(){
		delete []p;
	}
private:
	T *p;
	unsigned int __size;
};
#endif /*Array_HPP*/
