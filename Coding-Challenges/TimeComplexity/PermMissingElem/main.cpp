#include <vector>
#include <algorithm>

int solution(vector<int> &A) {
    // Implement your solution here
    int missing_number = 1;

    //interate through the vector
    for(auto i : A)
    {
        if(i == missing_number)
            missing_number++;
    }
    return missing_number;
}
