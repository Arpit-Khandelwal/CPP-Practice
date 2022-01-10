int setBits(int N)
{

    unsigned int n = N;
    int count = 0;

    while (n > 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }

    /*logic-2

        for(int i=0;i<sizeof(int)*8;i++) //sizeof(int)*8 because of constraints on N
        {
            if(N&(1<<i)) count++;
        }
    */

   //__builtin_popcount(n) - count all set bits

    return count;
}