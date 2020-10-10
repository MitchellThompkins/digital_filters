#ifndef IIR_HPP
#define IIR_HPP

template <size_t order>
class IIR {
public:
    IIR() = default;
    IIR(const IIR&) = delete;
    operator=(const IIR&) = delete;
    IIR(IIR&&) = delete;
    operator=(IIR&&) = delete;
    virtual ~IIR();

    virtual bool step() = 0;

private:
    size_t numCoeff;
};

#endif
