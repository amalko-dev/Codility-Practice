#include<vector>
#include<unordered_map>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
    // Implement your solution here
    //declare a hash-map
    unordered_map <int, int> Occurrences;


    //iterate through the passed vector
    for(auto i : A)
    {
        //check if i is present in the hashmap, if not create an entry and assign it to 1
        Occurrences[i]++;
    }

    //hash-map is created
    //iterate through the hash-map and find the key with odd number of occurrences
    for(const auto& i : Occurrences)
    {
        //find the first odd pair
        if((i.second)%2 != 0)
        {
            return i.first;

        }
    }
    return -1;

}
