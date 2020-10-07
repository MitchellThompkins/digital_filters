#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

class HelloWorld {
public:
    HelloWorld(int x)
        : _x(x)
    {
    }

    int val() { return _x; }
    int increment(int n = 1);

private:
    int _x;
};

#endif
