#ifndef VECTOR_LIST_H
#define VECTOR_LIST_H

#include <vector>
#include <list>
#include <algorithm>

// Name: Chase Sweers
// FSUID: cas23t

// Return a list containing the elements of numbers in their
// original order, but with duplicate occurrences removed.
//
// Only the first occurrence of each value should remain.
//
// Example:
// numbers = {4, 2, 4, 1, 2, 7, 1}
// result  = {4, 2, 1, 7}
//
// You should use std::vector and std::list.
// Do NOT use set, unordered_set, map, or unordered_map.
std::list<int> removeDuplicates(const std::vector<int> &numbers)
{
    std::list<int> results;
    std::size_t size = numbers.size();
    for(std::size_t i = 0; i < size; i++)
    {
        auto it = std::find(results.begin(),results.end(),numbers[i]);
        if(it == results.end())
        {
            results.push_back(numbers[i]);
        }
    } 
    return results; 
}

#endif
