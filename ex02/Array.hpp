#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>

class Array
{
    private:
        T arr[];
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &arr);

};

#endif

