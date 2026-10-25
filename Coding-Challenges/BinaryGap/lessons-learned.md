## Objective:
To find the max number of 0s between two 1s in a given/passed integer number

## Thought process:
- Inorder to find the maximum number of zeroes between two 1s within a passed integer number, it is essential to convert the decimal number to its equivalent representation
- since there exists no in-built functions to convert the decimal to its equivalent binary representation, we need to implement our own conversion function
  - for this sole purpose the custom function: `ConvertToBinary()` was written
  - word of caution: this function actually pushes the remainder from each iteration to the vector `bin`. But note that the vector `bin` represents the binary equivalent in the reverse order.
    - eg: if the passed number is 5 ==> Binary equivalent is 0101, but it is saved/present inside bin as: 1010 instead!! so, if the goal is to display the binary format, then we need to reverse the vector or iterate the vector from backwards and display it. This does not matter in our exercise because even if the binary format is reversed or not, the maximum count of 0s between two consecutive 1s is gonna stay the same nevertheless.
      - Eg: 0100011 ==> max_gap: 3
            1100010 ==> max_gap: 3
- once the binary representation is known, we need to identify the first 1. once the first 1 is identified, we set the count= 0 and set seen_one= true.
- continue iteration through the vector, whenever from now we encounter a 0, we increment the `count`.
- when the next 1 is encountered, we need to check if we are within the loop where previously we had encountered a 1, followed by 0 ==> if we are in that loop, then we check if count is greater than the max_gap. If it is, then we assign count to max_gap, since we have identified a larger gap than what was previously recorded. 
- at the end of the iteration through the vector, we return the max_gap

## Mental model:
- Identify in which we presently are in:
  - in a loop where a previous 1 was already identified??
  - in a loop where the 2nd consecutive 1 is identified??
  - in a loop where the 1st 1 was identified and now a 0 is encountered??
