#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int findKey(int *door, int key)
{
    if(key==0) return 0;
    return 1 + findKey(door, door[key]);
}

void solve()
{
    int n;
    cin >> n;
    int door[3+1];
    door[0] = -1;
    for (int i = 1; i <= 3;i++) 
    {
        cin >> door[i];
    }

    int count = findKey(door, n);
    // cout<<count<<endl;
    
    if (count == 3)
        cout << "YES";
    else
        cout << "NO";
    
    cout << endl;
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
