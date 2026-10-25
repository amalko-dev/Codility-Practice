#include<iostream>
#include<vector>

vector<int> solution(vector<int> &A, int K)
{
    int A_size = A.size();
    vector<int> B(A_size);
    int new_idx = 0;
    if (A_size)
    {
        K = K%A_size;
        //algorithm
        for (auto i = 0; i < A_size; i++)
        {
            //iterate through every element in A
            //cyclically rotate the elements by K
            new_idx = (i+K)%A_size; //because a wrap around occurs in every A_size th rotation
            B[new_idx] = A[i];

        }
    }
    //when passed array size is 0 (i..e, empty), we return the empty array before any rotation
    return B;
}
