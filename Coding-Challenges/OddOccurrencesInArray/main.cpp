#include<vector>
#include<unordered_map>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    //declare a hash-map
    unordered_map <int, int> Occurrences;
    int odd_pair;


    //iterate through the vector
    for(size_t i = 0; i < A.size(); i++)
    {
        //declare and initialize count to 1
        int count = 0;
        //count the occurrences of i in A
        for(size_t j = i; j < A.size(); j++)
        {
            if(A[j] == A[i])
            {
                count++;
            }

        }
        //check if the currently handled element is already present in the hash-map: Occurrences
        if(!Occurrences.contains(A[i]))
        {
            //add an entry to the hash-map
            Occurrences[A[i]] = count;
        }

    }

    //hash-map is created
    //iterate through the hash-map and find the key with odd number of occurrences
    for(const auto& i : Occurrences)
    {
        //find the first odd pair
        if((i.second)%2 != 0)
        {
            odd_pair = i.first;
            break;
        }
    }
    return odd_pair;
}
