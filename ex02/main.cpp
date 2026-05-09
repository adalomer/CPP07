#include <iostream>
#include "Array.hpp"

int main() {
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = static_cast<int>(i * 10);

	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	try 
	{
		std::cout << a[10] << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try 
	{
		for(int i = 0; i < 5;i++)
			std::cout << a[i] << std::endl;
	} 
	catch (const std::exception& e) 
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
