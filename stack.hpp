#pragma once

#include <memory>

template <class T, class Allocator = std::allocator<T> > class Stack {
public:
  typedef T value_type;
  typedef const value_type &const_reference;
  typedef value_type &reference;
  typedef Allocator allocator_type;
  typedef typename std::allocator_traits<Allocator>::pointer pointer;

  explicit Stack(unsigned int size);
  explicit Stack(const Allocator & = Allocator());
  ~Stack();
  bool Push(const T &ele);
  T &Pop();
  const T &Peek() const;
  unsigned int Size() const;
  unsigned int MaxSize() const;
  bool Empty() const;
  allocator_type GetAllocator() const;

private:
  pointer _stack_head;
  allocator_type _alloc;
  unsigned int _max;
  unsigned int _index;
};

#include "stack.tpp"