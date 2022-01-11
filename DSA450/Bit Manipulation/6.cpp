#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int findPosition(int N) {
        // code here
        if(!(N)) return -1;
        float ans = log(N)/log(2);
        if(ans!=floor(ans)) return -1;
        else return ans+1;
    }

void solve()
{
    int n;
    cin >> n;
    cout << findPosition(n) << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
