#include "iter.hpp"
void printInt(int &n) { std::cout << n << " "; }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, printInt); // 1 2 3 4 5 basar
    return 0;
}