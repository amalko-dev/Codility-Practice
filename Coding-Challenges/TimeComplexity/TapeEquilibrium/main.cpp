#include <vector>
#include <climits>
#include <cstdlib>
int solution(vector<int> &A)
{
    // Your implementation
    int LeftSum = A[0];
    int TotalSum = 0;
    int RightSum = 0;
    int array_size = A.size();
    int P = 1;
    int min_diff = INT_MAX;
    int current_diff;


    //Calculate the total sum
    for(auto i : A)
        TotalSum+= i;

    //compute
    while(P < static_cast<int>(array_size))
    {
        RightSum = TotalSum - LeftSum;
        current_diff = abs(LeftSum - RightSum);

        //update min_diff
        if (current_diff < min_diff)
        {
            min_diff = current_diff;
        }
        LeftSum+= A[P]; //when the cut varies based on P, the newLeftSum is always equal to the PrevLeftSum + newly added element from the previous right sub-array (i.e., A[P]) to the left-sub-array
        P++;


    }
    return min_diff;
}
