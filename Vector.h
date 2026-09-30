#ifndef VECTOR_H
#define VECTOR_H

#include <algorithm>
#include <utility>

// Name: Chase Sweers
// FSUID: cas23t

template <typename Object>
class Vector
{
public:
    // Construct a Vector containing initSize elements.
    // Set the initial capacity to initSize + SPARE_CAPACITY
    // and dynamically allocate the underlying array.
    explicit Vector(int initSize = 0)
    {
        // TODO
    }

    // Copy constructor.
    // Construct this Vector as a deep copy of rhs.
    Vector(const Vector & rhs)
    {
        // TODO
    }

    // Move constructor.
    // Transfer ownership of rhs's dynamically allocated array to this Vector.
    // Leave rhs in a valid empty state.
    Vector(Vector && rhs)
    {
        // TODO
    }

    // Destructor.
    // Release the dynamically allocated array owned by this Vector.
    ~Vector()
    {
        // TODO
    }

    // Copy assignment operator.
    // Replace the contents of this Vector with a deep copy of rhs.
    // Return *this.
    Vector & operator=(const Vector & rhs)
    {
        // TODO
    }

    // Move assignment operator.
    // Release the current array and transfer ownership of rhs's array
    // to this Vector. Leave rhs in a valid empty state and return *this.
    Vector & operator=(Vector && rhs)
    {
        // TODO
    }

    // Change the number of elements stored in the Vector to newSize.
    // If newSize exceeds the current capacity, increase the capacity.
    // Preserve existing elements that remain within the new size.
    void resize(int newSize)
    {
        // TODO
    }

    // Change the capacity of the Vector to newCapacity.
    // If newCapacity is smaller than the current size, do nothing.
    // Otherwise, allocate a new array, preserve the existing elements,
    // release the old array, and update the capacity.
    void reserve(int newCapacity)
    {
        // TODO
    }

    // Return a reference to the element at the given index.
    Object & operator[](int index)
    {
        // TODO
    }

    // Return a const reference to the element at the given index.
    const Object & operator[](int index) const
    {
        // TODO
    }

    // Return true if the Vector contains no elements.
    bool empty() const
    {
        // TODO
    }

    // Return the number of elements currently stored in the Vector.
    int size() const
    {
        // TODO
    }

    // Return the current capacity of the Vector.
    int capacity() const
    {
        // TODO
    }

    // Add a copy of x to the end of the Vector.
    // If the Vector is full, increase its capacity before insertion.
    void push_back(const Object & x)
    {
        // TODO
    }

    // Add x to the end of the Vector using move semantics.
    // If the Vector is full, increase its capacity before insertion.
    void push_back(Object && x)
    {
        // TODO
    }

    // Remove the last element by decreasing the size of the Vector.
    // You may assume the Vector is not empty.
    void pop_back()
    {
        // TODO
    }

    // Return a const reference to the last element.
    // You may assume the Vector is not empty.
    const Object & back() const
    {
        // TODO
    }

    // Return a reference to the last element.
    // You may assume the Vector is not empty.
    Object & back()
    {
        // TODO
    }

private:
    static const int SPARE_CAPACITY = 16;

    int theSize;
    int theCapacity;
    Object *objects;
};

#endif
