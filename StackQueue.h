#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <utility>

// Name: Chase Sweers
// FSUID: cas23t

// Determine whether all brackets in expression are correctly
// matched and nested.
//
// The expression contains only:
// (, ), [, ], {, }
//
// Examples:
// "([]{})" -> true
// "([)]"   -> false
// "((("    -> false
//
// You MUST use std::stack in your implementation.
bool isBalanced(const std::string &expression)
{
    // TODO
}


// Simulate students waiting for help during office hours.
//
// studentIDs contains the student IDs in their initial arrival order.
// questions[i] contains the number of questions that studentIDs[i]
// needs to ask.
//
// The student at the front of the queue asks exactly ONE question.
//
// If the student has no questions remaining after that question,
// the student leaves the queue.
//
// If the student still has questions remaining, the student moves
// to the back of the queue.
//
// Continue until all students have finished all of their questions.
//
// Return a vector containing the student IDs in the order in which
// they finish all of their questions.
//
// Example:
//
// studentIDs = {101, 205, 317}
// questions  = {  2,   1,   3}
//
// Processing:
//
// 101 asks one question -> 1 remains -> moves to back
// 205 asks one question -> finished
// 317 asks one question -> 2 remain  -> moves to back
// 101 asks one question -> finished
// 317 asks one question -> 1 remains -> moves to back
// 317 asks one question -> finished
//
// result = {205, 101, 317}
//
// You MUST use std::queue in your implementation.
std::vector<int> processStudents(
    const std::vector<int> &studentIDs,
    const std::vector<int> &questions)
{
    // TODO
}

#endif
