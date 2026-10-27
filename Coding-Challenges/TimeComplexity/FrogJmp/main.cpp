#include<cmath>

int solution(int X, int Y, int D) {
    // Implement your solution here
    int count = 0;
    int remainder = (Y-X)%D;
    int quotient = (Y-X)/D;

    if (remainder)
    {
        //round the quotient to the next highest integer
        count = quotient + 1;
    }
    else
    {
        //is perfectly divisible, return the quotient
        count = quotient;
    }

    return count;
}
