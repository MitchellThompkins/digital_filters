#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP

#include "stddef.h"

constexpr int gcd(int a, int b){
  return (b== 0) ? a : gcd(b, a % b);
}

template< size_t N >
class Example
{
    public:
        Example() = default;
        ~Example() = default;

        int getN();
        int getM();

    private:
        int _n {N};
        static constexpr int _div1 {36};
        static constexpr int _div2 {30};
        int _m = gcd( _div1, _div2 );
};

#include "example.tpp"

#endif
