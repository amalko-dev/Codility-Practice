## Objective:
- to find the minimum difference when the array is divided/ cut into two sub-arrays

## Thought process:
- sorting the array changes the order and order matters in this challenge

### Theory behind:
- we need to calculate two sums :
  - LeftSum : indicating the sum of the left-sub array
  - RightSum : indicating the sum of the right-sub arrary
- implement a for loop and iterate through the entire array and compute the TotalSum of the elements
- the initial LeftSum of the array should be same as the 1st element of the array, i.e., A[0]
- the first cut of the array that can give us the min_diff is:
  - Left-sub-array : [A[0]]
  - Right-sub-array: [A[1],....A[N-1]]
- we need to initialize a min_diff and current_diff
  - min_diff should be initialized to INT_MAX at the beginning
  - while iterating through each cuts of the array (starting from P=1):
    - compute the current_diff
    - check if the current_diff < min_diff
      - if yes, then update min_diff with current_diff
      - if not, then retain the min_diff
    - now update the LeftSum to LeftSum + A[P] , this is essential because the passed array is split based on P ==> when the position of the split moves (i.e., P+1), the Left-sub array has a new member (in comparison to the previous combination), i.e., A[P]. So, in the next iteration the Left-array would be:
      - Left array : [A[0], A[1] ..... A[P]]
      - Right array: [A[P+1].... A[N-1]]
    - then increment P, so that we calculate the new diff
    - continue until we iterate through the entirety of the array
- at the end return min_diff
