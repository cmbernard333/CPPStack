template <typename T>
Stack<T>::Stack(unsigned int size) : _max(size), _index(0) {
  _stack_head = new T[size];
}

template <typename T> Stack<T>::~Stack() { delete[](_stack_head); }

template <typename T> bool Stack<T>::Push(const T ele) {
  if (_index + 1 > _max) {
    return false;
  }
  _stack_head[_index++] = ele;
  return true;
}

template <typename T> T Stack<T>::Pop() {
  if (_index > 0) {
    T ele = _stack_head[--_index];
    return ele;
  }
  return T();
}

template <typename T> const T Stack<T>::Peek() const {
  if (_index > 0) {
    return _stack_head[_index - 1];
  }
  return T();
}

template <typename T> unsigned int Stack<T>::Len() const {
  return &_stack_head[_index] - _stack_head;
}

template <typename T> unsigned int Stack<T>::Size() const { return _max; }

template <typename T> bool Stack<T>::Empty() const { return _index == 0; }
