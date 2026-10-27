## Lessons learned:
This is a classic example in which a simple looping is the correct algorithm but has some performance pitfalls. Hence here, we need to make use of mathematical formula instead. 

to calculate the number of jumps, we shall use the formula:
jumps = (Y - X)/D;

But this raises an issue, the integer division always gets rounded to the smallest value. That is not something that we need. We need it to be rounded to the next integer value. So, inorder to do that efficiently, we will have to make use of the modulo operator, i.e., we start by calculating the quotient and remainder. 

Theory:
- if the remainder is > 0, we need to round the quotient to the next integer
- if the remainder = 0 ==> the distance to cover = Y - X is perfectly divisible by D(min distance the frog can jump) ==> return the quotient as it is.
