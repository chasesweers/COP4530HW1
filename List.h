#ifndef LIST_H
#define LIST_H

#include <utility>

// Name:
// FSUID:

template <typename Object>
class List
{
private:
    struct Node
    {
        Object data;
        Node *prev;
        Node *next;

        // Construct a Node containing a copy of d.
        Node(const Object &d = Object{},
             Node *p = nullptr,
             Node *n = nullptr)
            : data{d}, prev{p}, next{n}
        {
        }

        // Construct a Node by moving d into the Node.
        Node(Object &&d,
             Node *p = nullptr,
             Node *n = nullptr)
            : data{std::move(d)}, prev{p}, next{n}
        {
        }
    };

public:
    class const_iterator
    {
    public:
        // Construct an iterator that does not currently refer to a Node.
        const_iterator()
        {
            // TODO
        }

        // Return a const reference to the element at the current position.
        const Object &operator*() const
        {
            // TODO
        }

        // Move to the next Node and return the updated iterator.
        const_iterator &operator++()
        {
            // TODO
        }

        // Move to the next Node but return the iterator's previous value.
        const_iterator operator++(int)
        {
            // TODO
        }

        // Move to the previous Node and return the updated iterator.
        const_iterator &operator--()
        {
            // TODO
        }

        // Move to the previous Node but return the iterator's previous value.
        const_iterator operator--(int)
        {
            // TODO
        }

        // Return true if this iterator and rhs refer to the same Node.
        bool operator==(const const_iterator &rhs) const
        {
            // TODO
        }

        // Return true if this iterator and rhs refer to different Nodes.
        bool operator!=(const const_iterator &rhs) const
        {
            // TODO
        }

    protected:
        Node *current;

        // Return a reference to the data stored in the current Node.
        Object &retrieve() const
        {
            // TODO
        }

        // Construct an iterator referring to Node p.
        const_iterator(Node *p)
        {
            // TODO
        }

        friend class List<Object>;
    };

    class iterator : public const_iterator
    {
    public:
        // Construct an iterator that does not currently refer to a Node.
        iterator()
        {
            // TODO
        }

        // Return a modifiable reference to the current element.
        Object &operator*()
        {
            // TODO
        }

        // Return a const reference to the current element.
        const Object &operator*() const
        {
            // TODO
        }

        // Move to the next Node and return the updated iterator.
        iterator &operator++()
        {
            // TODO
        }

        // Move to the next Node but return the iterator's previous value.
        iterator operator++(int)
        {
            // TODO
        }

        // Move to the previous Node and return the updated iterator.
        iterator &operator--()
        {
            // TODO
        }

        // Move to the previous Node but return the iterator's previous value.
        iterator operator--(int)
        {
            // TODO
        }

    protected:
        // Construct an iterator referring to Node p.
        iterator(Node *p)
            : const_iterator{p}
        {
        }

        friend class List<Object>;
    };

public:
    // Construct an empty List with head and tail sentinel Nodes.
    List()
    {
        // TODO
    }

    // Construct this List as a deep copy of rhs.
    List(const List &rhs)
    {
        // TODO
    }

    // Transfer the contents of rhs to this List without copying
    // every element. Leave rhs in a valid empty state.
    List(List &&rhs)
    {
        // TODO
    }

    // Remove all elements and release the sentinel Nodes.
    ~List()
    {
        // TODO
    }

    // Replace this List with a deep copy of rhs and return *this.
    List &operator=(const List &rhs)
    {
        // TODO
    }

    // Transfer the contents of rhs to this List.
    // Leave rhs in a valid empty state and return *this.
    List &operator=(List &&rhs)
    {
        // TODO
    }

    // Return an iterator referring to the first element.
    iterator begin()
    {
        // TODO
    }

    // Return a const_iterator referring to the first element.
    const_iterator begin() const
    {
        // TODO
    }

    // Return an iterator representing the position immediately
    // after the last element.
    iterator end()
    {
        // TODO
    }

    // Return a const_iterator representing the position immediately
    // after the last element.
    const_iterator end() const
    {
        // TODO
    }

    // Return the number of elements currently stored in the List.
    int size() const
    {
        // TODO
    }

    // Return true if the List contains no elements.
    bool empty() const
    {
        // TODO
    }

    // Remove all elements from the List.
    void clear()
    {
        // TODO
    }

    // Return a modifiable reference to the first element.
    Object &front()
    {
        // TODO
    }

    // Return a const reference to the first element.
    const Object &front() const
    {
        // TODO
    }

    // Return a modifiable reference to the last element.
    Object &back()
    {
        // TODO
    }

    // Return a const reference to the last element.
    const Object &back() const
    {
        // TODO
    }

    // Insert a copy of x at the beginning of the List.
    void push_front(const Object &x)
    {
        // TODO
    }

    // Insert x at the beginning of the List using move semantics.
    void push_front(Object &&x)
    {
        // TODO
    }

    // Insert a copy of x at the end of the List.
    void push_back(const Object &x)
    {
        // TODO
    }

    // Insert x at the end of the List using move semantics.
    void push_back(Object &&x)
    {
        // TODO
    }

    // Remove the first element from the List.
    void pop_front()
    {
        // TODO
    }

    // Remove the last element from the List.
    void pop_back()
    {
        // TODO
    }

    // Insert a copy of x immediately before itr.
    // Return an iterator referring to the newly inserted element.
    iterator insert(iterator itr, const Object &x)
    {
        // TODO
    }

    // Insert x immediately before itr using move semantics.
    // Return an iterator referring to the newly inserted element.
    iterator insert(iterator itr, Object &&x)
    {
        // TODO
    }

    // Remove the element referred to by itr.
    // Return an iterator referring to the following element.
    iterator erase(iterator itr)
    {
        // TODO
    }

    // Remove all elements in the range [from, to).
    // Return an iterator referring to to.
    iterator erase(iterator from, iterator to)
    {
        // TODO
    }

private:
    int theSize;
    Node *head;
    Node *tail;

    // Initialize an empty List by creating and connecting
    // the head and tail sentinel Nodes.
    void init()
    {
        // TODO
    }
};

#endif
