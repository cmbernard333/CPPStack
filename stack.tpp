#define DEFAULT_STACK_SIZE 10

template <class T, class Allocator>
Stack<T, Allocator>::Stack(unsigned int size) : _alloc(Allocator()), _max(size), _index(0) {
  _stack_head = _alloc.allocate(size);
}

template <class T, class Allocator>
Stack<T, Allocator>::Stack(const Allocator& alloc) : _alloc(alloc), _max(DEFAULT_STACK_SIZE), _index(0) {
  _stack_head = _alloc.allocate(DEFAULT_STACK_SIZE);
}

template <class T, class Allocator> Stack<T, Allocator>::~Stack() {
  _alloc.deallocate(_stack_head, _max);
}

template <class T, class Allocator>
bool Stack<T, Allocator>::Push(const T &ele) {
  if (_index + 1 > _max) {
    return false;
  }
  _stack_head[_index++] = ele;
  return true;
}

template <class T, class Allocator> T &Stack<T, Allocator>::Pop() {
  T& ele = _stack_head[--_index];
  return ele;
}

template <class T, class Allocator> const T &Stack<T, Allocator>::Peek() const {
  return _stack_head[_index - 1];
}

template <class T, class Allocator>
unsigned int Stack<T, Allocator>::Len() const {
  return &_stack_head[_index] - _stack_head;
}

template <class T, class Allocator>
unsigned int Stack<T, Allocator>::Size() const {
  return _max;
}

template <class T, class Allocator> bool Stack<T, Allocator>::Empty() const {
  return _index == 0;
}
