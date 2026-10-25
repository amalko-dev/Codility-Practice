#include<vector>
#include<unordered_map>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
    int result = 0;

    for(auto i : A)
    {
        result ^= i;
    }
    return result;
}
