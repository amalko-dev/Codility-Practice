## Objective
To find the missing number within a given array of elements in the range [1, N+1]

## Thinking process:
- The first thing to notice is that the passed vector **might not necessarily be sorted**. 
- Hence the first course of action would be to sort the array in the ascending order using the `std::sort()`
- after sorting implement a simple algorithm as follows:
  - since it is explicitly said that the array shall contain only positive numbers starting from 1, the smallest positive integer that could be missing is 1, so we start with 1 as the potential missing number
  - iterate through the array of numbers and check against the missing number
    - if the missing number is present in the array, increment the missing number by missing_number++
  - once we interate through the entire array, return the missing_number
