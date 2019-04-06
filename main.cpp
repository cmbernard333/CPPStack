#include <iostream>
#include "stack.hpp"


int main(int argc, char** argv)
{
    Stack<int> s;
    s.Push(10);
    std::cout << s.Peek() << std::endl;
    return 0;
}
