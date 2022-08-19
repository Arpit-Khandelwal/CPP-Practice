#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0;
        for(;i<matrix.size();i++)
            if(target<matrix[i][0]) 
            {
                break;
            }
        i--;
        for(;j<matrix[i].size();j++) if(target==matrix[i][j]) return true;
        return false;
}

void solve()
{
    int m, n;
    cin >> m>>n;
    int count = 1;
    vector<vector<int>> arr( m , vector<int> (n, 0));
    for (int i = 0; i < m;i++)
    for (int j = 0; j < n;j++)
        arr[i][j] = count++;
    for (int i = 0; i < m;i++)
    for (int j = 0; j < n;j++)
        cout << arr[i][j] << " ";
    cout << searchMatrix(arr, 0);
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

