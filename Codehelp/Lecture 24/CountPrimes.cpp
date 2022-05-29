#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{

    vector<bool> prime(n + 1, true);
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
                prime[j] = false;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout<<countPrimes(n)<<endl;
    
}