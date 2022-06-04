#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int magicIndex(vector<int> a, int n)
{
    // Write your code here

    for (int i : a)
    {
        if (i == n)
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
    cin>>size;

    int n;
    cin >> n;

    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout << magicIndex(a, 7);
    return 0;
}
