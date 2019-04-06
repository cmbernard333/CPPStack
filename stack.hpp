#pragma once

template <typename T> class Stack {
public:
  Stack(unsigned int size = 10);
  ~Stack();
  bool Push(const T ele);
  T Pop();
  const T Peek() const;
  unsigned int Len() const;
  unsigned int Size() const;

private:
  T *_stack_head;
  unsigned int _max;
  unsigned int _index;
};

#include "stack.tpp"
