#include <iostream>
#include <cassert>
#include "stack.hpp"


int main(int argc, char** argv)
{
    Stack<int> s(11);
    s.Push(10);
    std::cout << s.Peek() << std::endl;

    for(int i = 1; i <= 10; i++) {
        assert(s.Push(i));
    }

    assert(s.Size()==11);

    for(int i = 0; i < s.Size(); i++) {
        std::cout << "ele: " << s.Pop() << std::endl;
    }
    
    return 0;
}
