#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T,typename F>
void iter(T *array,int length,F fnc)
{
	if(!array) 
	{
		std::cout << "No array adress!" << std::endl;
		return;
	}
	else if(!fnc) 
	{
		std::cout << "No function to given!" << std::endl;
		return;
	}
	else if(length <= 0)  
	{
		std::cout << "Given number cant equal 0 or negative" << std::endl;
		return;
	}
	for(int a = 0; a < length; a++) 
	{
		fnc(array[a]);
	}
}

#endif