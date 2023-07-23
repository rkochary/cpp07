#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename type>

void swap(type &a,type &b)
{
    type tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename type>

type min(type &a,type &b)
{
    if(a < b)
        return a;
    return b;
}

template <typename type>

type max(type &a,type &b)
{
    if(a > b)
        return a;
    return b;
}


#endif