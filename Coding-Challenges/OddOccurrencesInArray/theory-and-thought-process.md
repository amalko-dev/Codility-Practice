## Question
A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.
Write a function:
```cpp
class Solution { public int solution(int[] A); }
```
that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7, as explained in the example above.

Write an efficient algorithm for the following assumptions:

N is an odd integer within the range [1..1,000,000];
each element of array A is an integer within the range [1..1,000,000,000];
all but one of the values in A occur an even number of times.


# Thought process:

### Objective:
- To find the unpaired element and return its value

## Chain of thought:
- better to use a hash map to quickly look up the occurrences/frequencies of a number within the vector as look-up from the hash maps only costs O(1). 
- How to build the hash map?
  - it is essential to understand that inorder to build the hashmap from scratch we need NOT select one element at a time and compare it against every other element as this would require nested for loops and hence resulting in O(n^2) time complexity
  - there is a better and more efficient solution to this problem:
    - we can make use of the *operator[]* of the unordered_map
      - the operator[] when called upon a key in a hash-map creates an entry in the hash-map if the key does not already exist and assigns its value = 0
      - so the simple algorithm would be the following:
        - iterate through each element in the passed vector
        - for every element that is currently handled:
          - use the operator[] and increment its value in the hash-map
            - what happens in the background:
              - when the key does not already exist in the hash-map, this creates a new entry with an initial value zero. When we call Occurrences[i]++; it adds the key as new and increments it by 1 ==> now we have successfully detected that the current element is discovered and its occurrence is noted.
              - when the key already exist in the hash-map, the increment operator just increments the value of the key ==> the next occurrence of the element is registered. 
              - once we loop through the entire vector and have created the hash-map, we loop through the hash-map and search for the first occurrence of *odd* value. and we return its corresponding *key*


### Even more efficient and simpler solution:
Here we make use of the logical **XOR** operator and its functionality. 
Theory: Mental model to follow:
- if we XOR a number with itself = 0 (self = cancellation)
- if we XOR a number with 0 = number itself (identity)
- XOR results does not change depending on the order in which it is applied to
    - that is : A ^ B ^ C = C ^ A ^ B (commutative)
- therefore the idea is that while we iterate through the elements in the passed vector, we progressively perform **XOR** over each element and save its result.
- we start with result = 0 and then perform XOR like the following:
```cpp
int result = 0;
//iterate through the entire vector and perform XOR progressively
for(auto i : vector)
{
    result^= i;
}
return result;
```

==> at the end of the for loop iteration:
- since all the identical pairs on *xor* cancels out each other, the result of XOR will be the number that has *odd number of occurrence* !!
- if none of the members have odd number of occurrence ==> the result will be **zero** !!
