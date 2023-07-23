#include "Iter.hpp"

int main()
{
    int arr1[] = {0,1,2,3,4,5};
    int length = 6;
    iter(arr1,length,funct);

    std::cout << std::endl;

    char arr2[] = {'a','b','c'};
    int len = 3;
    iter(arr2,len,funct);
}