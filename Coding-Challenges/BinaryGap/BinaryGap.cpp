#include <iostream>
#include<vector>
using namespace std;

vector<int>bin;

void ConvertToBinary(int N)
{
    int remainder = 0;

    //algorithm to convert decimal number to its binary equivalent
    while(N > 0)
    {
        remainder = N % 2;
        N = N/2;
        bin.push_back(remainder);
    }
    bin.push_back(N);

}

int countBinaryGap(const vector<int> &vec)
{
    int count = 0;
    int maxGap = 0;
    bool seen_one = false;

    //identify the max consecutive zeroes in the binary vector
    // iterate through the vector
    for (auto i : vec)
    {
        //check if you encounter a 1
        if (i == 1)
        {
            //check if count > maxGap, if so, then update maxGap to count
            if(count > maxGap)
            {
                maxGap = count;
            }
            count = 0;
            seen_one = true;
        }
        else
        {
            //encountered a 0 --> increment the count
            if(seen_one)
            {
                count++;
            }
        }
    }
    return maxGap;
}

int main()
{
    int N = 32;
    ConvertToBinary(N);
    //display the binary representation of the passed integer
    for(int i= bin.size()-1; i >= 0; i--)
    {
       cout<<bin[i]<<" ";
    }

    cout<<endl;
    cout<<countBinaryGap(bin);


}
