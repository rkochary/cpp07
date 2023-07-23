#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template <typename T>

void funct(T t)
{
    std::cout << "the value = " << t << std::endl;
}

template <typename T,typename len>

void iter(T *ptr,len length,void (*func)(const T&))
{
    for(int i = 0; i < length;i++)
    {
        func(ptr[i]);
    }
}

#endif