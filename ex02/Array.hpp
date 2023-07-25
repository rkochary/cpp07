#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>

class Array
{
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &);
        Array& operator=(const Array&);
        T& operator[](unsigned int)const;
        ~Array();
        unsigned int size();
};

template <typename T>

Array<T>::Array() : _size(0)
{
   _arr = new T[0];
}

template <typename T>

Array<T>::Array(unsigned int n) : _size(n)
{
   _arr = new T[n];
}

template <typename T>

Array<T>::Array(const Array &obj) : _size(obj._size)
{
   _arr = new T[_size];
   for(int i = 0; i < _size; i++)
      _arr[i] = obj[i];
}

template <typename T>

Array<T> & Array<T>::operator=(const Array &obj)
{
   if(this != &obj)
   {
      _size = obj._size;
      delete _arr;
      _arr = new T[_size];
      for(int i = 0; i < _size; i++)
         _arr[i] = obj[i];
   }
   return *this;
}

template <typename T>

T & Array<T>::operator[](unsigned int n) const
{
   if(n >= _size)
      throw std::out_of_range("Out of range");
   return _arr[n];
}

template <typename T>

unsigned int Array<T>::size()
{
   return _size;
}

template <typename T>

Array<T>::~Array()
{
      delete[] _arr;
}

#endif

