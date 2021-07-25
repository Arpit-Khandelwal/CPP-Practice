#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<vector<int>> generate(int numRows) 
{
    vector<vector<int>> pascal;
    vector<int> col;
    col.push_back(1);
    pascal.push_back(col);
    for (int i = 1; i < numRows;i++)
    {
        col.clear();
        col.push_back(1);
        for (int j = 1; j < i;j++)
            col.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
        col.push_back(1);
        pascal.push_back(col);
    }
    return pascal;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for(auto x:ans)
    {
        for(auto y:x)
            cout << y << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
