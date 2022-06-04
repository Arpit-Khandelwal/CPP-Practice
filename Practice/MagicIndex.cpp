#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int magicIndex(vector<int> a, int n)
{
    // Write your code here
    for (int i = 0; i < n; i++)
    {
        if (i == a[i])
        {
            // cout << i;
            return i;
        }
    }
    return -1;
}

int main()
{

    vector<int> a;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    cout << magicIndex(a, size);
    return 0;
}
