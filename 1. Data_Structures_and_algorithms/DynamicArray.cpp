//
//  DynamicArray.cpp
//  LinkedInCppTraining
//
//  The dynamic array class will have the following features
//  - Add
//  - Remove
//  - Find
//  - Delete
//
//  Key Point 1: Automatic Expansion and Reduction
//      - When the capacity is used up, expand the size to double
//      - When the capacity is down to 1/4, reduce the size to 1/2
//  Key Point 2: Index Out of Bounds Check
//  Key Point 3: Preventing Memory Leak When Deleting Elements
//  Other Details for Optimization
//
//  Created by Ray Lai on 24/1/2025.
//

#include "DynamicArray.hpp"

/**
 * DynamicArray
 *
 * Dynamic array is built on the base array with following functionalities
 * - Support class template
 * - Automatic resizing when the capacity is used up or reduced
 */
template <typename T>
class DynamicArray {
    // Base data
    T* data_;

    // Currente Size (Number of values in the array)
    int size;

    // Maximum Capacity of an array
    int cap;

    // Default capacity when initialising an array
    static const int INIT_CAP = 1;

   private:
    // Resize array
    void _resize(int);

    // Check if the element index is out of bound
    bool _isElementIndex(int);

    // Check whether the position index is out of bounds
    bool _isPositionIndex(int);

    // Check if an element can exist at `index`.
    // Throw error if cannot
    void _checkElementIndex(int index);

    // Check if the position index can add an element.
    // Throw error if cannot
    void _checkPositionIndex(int index);

   public:
    DynamicArray();
    DynamicArray(int);

    // Append
    void append(T);
    // Insert at element to position `index`
    void insert(int, T);
    // Insert an element at the front
    void prepend(T);

    // Delete last element
    T removeLast();
    // Delete element at position `index`
    T remove(int);
    // Delete first element
    T removeFirst();

    // Get Value
    T get(int);

    // Edit, return old value
    T set(int, T);

    // Utilities
    int getSize();
    bool isEmpty();
};

template <typename T>
void DynamicArray<T>::_resize(int newCap) {
    T* tmp = new T[newCap];

    // Copy the values from old array to new array
    for (int i = 0; i < size; i++) {
        tmp[i] = data_[i];
    }

    // Deallocate array, leave the memory space
    // to the new array
    delete[] data_;

    data_ = tmp;
    cap = newCap;
}

// Check if the element index is out of bound
template <typename T>
bool DynamicArray<T>::_isElementIndex(int index) {
    return index >= 0 && index < size;
}

// Check if the position can insert an element
// This is different from `_isElementIndex` as
// we are inserting the element in the middle between
// two numbers
//
// Example:
// nums = [ | 5 | 6 | 7 | 8 | ]
// index    0   1   2   3   4
//
// It is valid to insert at position 4 (Size of array)
// The check will be whether 0 <= index <= size

// Check whether the position index is out of bounds
template <typename T>
bool DynamicArray<T>::_isPositionIndex(int index) {
    return index >= 0 && index <= size;
}

// Check if an element can exist at `index`.
// Throw error if cannot
template <typename T>
void DynamicArray<T>::_checkElementIndex(int index) {
    if (!_isElementIndex(index)) {
        throw std::out_of_range("Index out of bounds");
    }
}

// Check if the position index can add an element.
// Throw error if cannot
template <typename T>
void DynamicArray<T>::_checkPositionIndex(int index) {
    if (!_isPositionIndex(index)) {
        throw std::out_of_range("Index out of bounds");
    }
}

/**
 Contructor of no specified size
 */
template <typename T>
DynamicArray<T>::DynamicArray() {
    this->data_ = new T[INIT_CAP];
    this->size = 0;
    this->cap = INIT_CAP;
}

/**
 Construct wth specified size
 */
template <typename T>
DynamicArray<T>::DynamicArray(int size) {
    this->data_ = new T[size];
    this->size = 0;
    this->cap = size;
}

// Append
template <typename T>
void DynamicArray<T>::append(T elem) {
    // Check if the data has enough capacity
    if (size == cap) {
        _resize(2 * cap);
    }

    // Append the new element to the end
    data_[size] = elem;
    size++;
}

// Insert at element to position `index`
template <typename T>
void DynamicArray<T>::insert(int index, T elem) {
    // Check if out of bound
    _checkPositionIndex(index);

    // Check base data array capacity
    // If not having enough capacity, resize the array
    if (size == index) {
        _resize(2 * cap);
    }

    // Now we have made sure the array has enough capacity
    // We can now leave a space in the array for the insertion
    // of the new element.
    // We do it by copying the existing element to the space
    // next to it, up to position `index`
    //
    // Example
    // Old array: [0, 1, 2, 3, 4, [], [], ...],
    // - We can Move `4`, `3`, `2` to right hand side to reserve a space after
    // element `1` New array: [0, 1, [], 2, 3, 4, [], [], ...]
    for (int i = size - 1; i >= index; i--) {
        data_[i + 1] = data_[i];
    }

    // Insert the new element
    data_[index] = elem;

    // Increment the size of array
    size++;
}

// Insert an element at the front
template <typename T>
void DynamicArray<T>::prepend(T elem) {
    this->insert(0, elem);
}

template <typename T>
T DynamicArray<T>::removeLast() {
    // Check if the array size is 0.
    // If the array size is 0, there is nothing to remove.
    // Throw out of range exception.
    if (size == 0) {
        throw std::out_of_range("NoSuchElementException");
    }

    // Check if the array can reduce capacity
    // If the size of array is less than 1/4 of capacity,
    // reduce the capacity by half
    if (size == cap / 4) {
        _resize(cap / 2);
    }

    // Get the last element
    T deletedVal = data_[size - 1];

    // Delete the last element
    data_[size - 1] = NULL;
    size--;

    return deletedVal;
}

// Remove the element at `index`
template <typename T>
T DynamicArray<T>::remove(int index) {
    // Check if the index is out of bound
    // If out of bound, throw error
    _checkElementIndex(index);

    // Reduce capacity
    // If the size of array is less than 1/4 of capacity,
    // reduce the capacity by half
    if (size == cap / 4) {
        _resize(cap / 2);
    }

    // Get the target element
    T deletedVal = data_[index];

    // Remove the selected element
    // Move the elements from index + 1 to end
    // one by one to the left to fill the gap
    for (int i = index = 1; i < size; i++) {
        data_[i - 1] = data_[i];
    }

    // After moving all the elements
    // the laset element is set to NULL
    data_[size - 1] = NULL;
    size--;

    return deletedVal;
}

// Remove the first element
template <typename T>
T DynamicArray<T>::removeFirst() {
    return remove(0);
}

// Get element
template <typename T>
T DynamicArray<T>::get(int index) {
    // Check if element is out of bound
    _checkElementIndex(index);

    return data_[index];
}

// Set element at index, replace the old one
template <typename T>
T DynamicArray<T>::set(int index, T elem) {
    // Check if element is out of bound
    _checkElementIndex(index);

    // Modify data
    T oldVal = data_[index];
    data_[index] = elem;
    return oldVal;
}

template <typename T>
int DynamicArray<T>::getSize() {
    return size;
}

template <typename T>
bool DynamicArray<T>::isEmpty() {
    return size == 0;
}

int main() {
    std::cout << "Testing" << std::endl;
    
    DynamicArray<int> *da = new DynamicArray<int>();
    da->append(1);
    da->append(2);
    da->append(3);
    da->append(4);
    da->append(5);
    da->append(6);
    da->append(7);
    da->append(8);
    da->append(9);
    da->append(10);
    
    std::cout << "Index 2: " << da->get(2) << std::endl;
    std::cout << "Index 3: " << da->get(3) << std::endl;
    std::cout << "Index 4: " << da->get(4) << std::endl;
    
    // Add at first
    da->prepend(99);
    
    // Insert at index 6
    da->insert(6, 256);
    
    // Remove the last
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    da->removeLast();
    
    
}
