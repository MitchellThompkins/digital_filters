#ifndef IIR_HPP
#define IIR_HPP

template< size_t order, >
class IIR {
public:
    IIR() = default;
    
    virtual ~IIR();
private:
    size_t numCoeff;
};

#endif
