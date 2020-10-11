#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include "stddef.h"

template< size_t N >
class Example
{
    public:
        Example() = default;
        ~Example() = default;

        int getN();

    private:
        int _n {N};
};

#include "example.tpp"

#endif
