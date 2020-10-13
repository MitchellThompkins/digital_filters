#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include "stddef.h"

constexpr float calq( const float a )
{
    float f {0.0F};
    if(a<=0)
        f=2;
    else
        f=a;

    if( a<=10000.0F )
        f = calq(f*10.3F);

    return f;
}

constexpr void test( float *a, size_t s )
{
    for( size_t i {0}; i != s; i++)
        *(a+i) = calq(static_cast<float>(i)*20.0F);
    return;
}

template<typename T, size_t N>
class Coeff
{
    public:
        constexpr Coeff():_coeff()
        {
            test(&_coeff[0], N);
        }

        constexpr T operator[](const size_t i)
        {
            return _coeff[i%N];
        }
    private:

        T _coeff[N];
        size_t _size {N};
};

template< size_t N >
class Example
{
    public:
        Example() = default;
        ~Example() = default;

        constexpr float operator[](const size_t i)
        {
            return _coeff[i];
        }


    private:
        Coeff<float,N> _coeff;
};

#include "example.tpp"

#endif
