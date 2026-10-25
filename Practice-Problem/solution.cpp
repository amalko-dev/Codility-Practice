#include<algorithm>

int FindMissingNumber(vector<int> &nums)
{
    //sort the received array
    sort(nums.begin(), nums.end());

    int miss = 1;

    //iterate through the sorted array and find if the miss is present
    for(auto i: nums)
    {
        if (miss == i)
        {
            //miss is present, increment miss to the next integer
            miss+=1;
        }
        //do nothing, keep miss as it is
    }
    return miss;
}
