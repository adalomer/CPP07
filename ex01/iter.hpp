#ifndef	İTER_HPP
#define İTER_HPP

#include <iostream>

template <typename T,typename F>
void iter(T *array, size_t length, F fnc)
{
	if( !array)
	{
		std::cout << "No array adress!"<< std::endl;
		return;
	}
	else if(!fnc)
	{
		std::cout << "No function to given!"<< std::endl;
		return;
	}
	for(size_t  a = 0;  a < length; a++)
	{
		fnc(array[a]);
	}

}

#endif