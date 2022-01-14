//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/
vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    int i = n - 1;

    while (i >= 0)
    {
        digits[i] += 1;
        if (digits[i] != 10)
            return digits;

        digits[i] -= 10;
        i--;
    }
    if (i >= 0)
        return digits;

    vector<int> arr(n + 1, 0);
    arr[0] = 1;
    return arr;
}