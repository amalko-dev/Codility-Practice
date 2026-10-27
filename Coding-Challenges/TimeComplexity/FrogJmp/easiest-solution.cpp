int solution(int X, int Y, int D) {
    // Implement your solution here
    int count = 0;
    int result = X;

    if (X <= Y)
    {
        //algorithm
        while(result < Y)
        {
            result+= D;
            count++;
        }
    }
    else
    {
        return 0;
    }
    return count;
}
