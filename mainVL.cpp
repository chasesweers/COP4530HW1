#include <iostream>
#include <vector>
#include <list>
#include "VectorList.h"

void printList(const std::list<int> &lst)
{
    std::cout <<"{";
    bool first = true; 
    for(int x : lst)
    {
        if(!first)
            std::cout << ", ";
        std::cout << x;
        first = false;
    }
    std::cout << "}" << std::endl;
}




int main()
{
    std::vector<int> v1 = {4,2,4,1,2,7,1};
    std::cout << "Test 1 expected: {4,2,1,7}"
    std::cout << "Test 1 got:   ";
    printList(removeDuplicates(v1));

    std::vector<int> v2 = {};
    std::cout << "Test 2 expected: {}"
    std::cout << "Test 1 got:   ";
    printList(removeDuplicates(v2));

    std::vector<int> v3 = {5,5,5};
    std::cout << "Test 3 expected: {5}"
    std::cout << "Test 3 got:   ";
    printList(removeDuplicates(v3));

    std::vector<int> v4 = {1,2,3};
    std::cout << "Test 4 expected: {1,2,3}"
    std::cout << "Test 4 got:   ";
    printList(removeDuplicates(v4));

    std::vector<int> v5 = {9};
    std::cout << "Test 5 expected: {9}"
    std::cout << "Test 5 got:   ";
    printList(removeDuplicates(v5));

    std::vector<int> v6 = {1,1,2,2,3};
    std::cout << "Test 6 expected: {1,2,3}"
    std::cout << "Test 6 got:   ";
    printList(removeDuplicates(v6));

    std::vector<int> v7 = {0,-1,0,-1};
    std::cout << "Test 7 expected: {0,-1}"
    std::cout << "Test 7 got:   ";
    printList(removeDuplicates(v7));

    return 0;

}