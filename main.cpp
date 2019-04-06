#include "stack.hpp"
#include <cassert>
#include <iostream>

int main(int argc, char **argv) {
  Stack<int> s(11);
  assert(s.Size() == 11);

  s.Push(10);
  std::cout << s.Peek() << std::endl;

  for (int i = 1; i <= 10; i++) {
    assert(s.Push(i));
  }

  std::cout << "Len: " << s.Len() << std::endl;
  assert(!s.Empty());

  for (int i = 0; i < s.Size(); i++) {
    std::cout << "ele: " << s.Pop() << std::endl;
  }

  assert(s.Empty());

  return 0;
}
