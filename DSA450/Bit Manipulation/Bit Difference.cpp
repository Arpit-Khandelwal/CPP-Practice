//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/

int countBitsFlip(int a, int b)
{

    // Your logic here
    int count = 0;

    int xorred = a ^ b;

    while (xorred > 0)
    {
        if (xorred & (1))
            count++;
        xorred = xorred >> 1;
    }
    return count;

    //logic 2
    /*
    int count = 0;
    while (a > 0 || b > 0)
    {
        if ((a & 1) != (b & 1))
            count++;
        a = a >> 1;
        b = b >> 1;
    }
    return count;
    */
}