#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

string solve()
{
    int n,w;
    cin >> n >> w;
    int i,j;
    vector<int> donuts;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        donuts.push_back(j);
    }
    int sum0,sum1;
    sum0 = sum1 = 0;
    i = 0;
    j = 1;
    for (; i < n || j<n;)
    {
        if(i<n) sum0 += donuts[i];
        if(j<n) sum1 += donuts[j];
        if(sum0>=w || sum1>=w)
            return "Yes";
        i += 2;
        j += 2;
    }
    return "No";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        cout<< solve()<<"\n";
    }
    return 0;
}
