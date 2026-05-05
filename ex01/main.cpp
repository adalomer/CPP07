#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T const &x) 
{
	std::cout << x << " "; 
}

void multiply(int &n) 
{ 
	n *= 2; 
}

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    std::string str[] = {"A", "B", "C"};

    std::cout << "Ints: ";
    iter(arr, 5, print<int>);
    
    std::cout << "\nMultiplied: ";
    iter(arr, 5, multiply);
    iter(arr, 5, print<int>);

    std::cout << "\nStrings: ";
    iter(str, 3, print<std::string>);
    std::cout << std::endl;

	int *arr1 = NULL;
	iter(arr1,1,multiply);
	iter(arr,-1,multiply);

    return 0;
}