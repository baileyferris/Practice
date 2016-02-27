#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

class DynamicArray {
public:
  // type definitions
  using size_type = int;
  using value_type = int;
  using iterator = value_type*;
  using const_iterator = const iterator;
  
  // default constructor
  explicit DynamicArray();
  // destructor
  ~DynamicArray();
  // construct with given size
  explicit DynamicArray(size_type size);
  // construct with given size and size copies of val
  explicit DynamicArray(size_type size, const value_type& val);
  // copy constructor
  DynamicArray(const DynamicArray& other);
  // copy assignment
  DynamicArray& operator=(const DynamicArray& rhs);

  // get the value at the given index
  // does not do bounds checking
  value_type& operator[](size_type index);
  const value_type& operator[](size_type index) const;

  // returns an iterator to the first element
  iterator begin();
  const_iterator begin() const;

  // returns an iterator to one past the last element
  iterator end();
  const_iterator end() const;

  // returns true if the array is empty, false otherwise
  bool empty() const;

  // get size of the array
  size_type size() const;

  // insert the given value before the given index
  // requires that the index is valid
  void insert(size_type index, const value_type& val);

  // removes all elements from the container
  // doesn't modify the amount of allocated storage
  void clear();

  // erase elements in the range [start_index, end_index)
  // requires that the indices are valid
  // requires that start_index < end_index
  void erase(size_type start_index, size_type end_index);

  // add value to the back of the array
  void push_back(const value_type& val);

  // remove the last element of the array
  // requires that the array isn't empty
  void pop_back();

  // set the size of the array to the given size, causes a realocation if the
  // given size is larger than the current max size
  // if given size is larger than the current size, copies of val are inserted
  // into the new elements
  void resize(size_type size, const value_type& val = value_type{});

  // swap this array with other
  void swap(DynamicArray& other);

private:
  // Add any necessary variables or methods here
};

// lexicograpically compares lhs to rhs
bool operator==(const DynamicArray& lhs, const DynamicArray& rhs);
bool operator!=(const DynamicArray& lhs, const DynamicArray& rhs);
bool operator<(const DynamicArray& lhs, const DynamicArray& rhs);
bool operator<=(const DynamicArray& lhs, const DynamicArray& rhs);
bool operator>(const DynamicArray& lhs, const DynamicArray& rhs);
bool operator>=(const DynamicArray& lhs, const DynamicArray& rhs);

#endif /*DYNAMIC_ARRAY*/
