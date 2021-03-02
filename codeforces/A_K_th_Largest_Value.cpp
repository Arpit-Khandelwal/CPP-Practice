#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int t, x, ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ones += a[i];
    }
    while (q-- > 0)
    {
        cin >> t;
        cin >> x;
        if (t == 1)
        {
            --x;
            ones -= a[x];
            a[x] ^= 1;
            ones += a[x];
        }
        if (t == 2)
        {
            if (x <= ones)
                cout << "1\n";
            else
                cout << "0\n";
        }
    }
}