#include <algorithm>
#include<vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    int missing_number = 1;
    sort(A.begin(), A.end());

    //algorithm
    for(auto i : A)
    {
        if(i == missing_number)
        {
            missing_number++;
        }
    }
    return missing_number;
}
