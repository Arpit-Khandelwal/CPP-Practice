#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{

}
void solve()
{
    //input
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int A[n1], B[n2], C[n3];
    for (int i = 0; i < n1; i++) cin>>A[i];
    for (int i = 0; i < n2; i++) cin >> A[i];
    for (int i = 0; i < n3; i++) cin >> A[i];
    
    //processing
    vector<int> ans = commonElements(A, B, C, n1, n2, n3);
    
    //output
    for(int i:ans) cout<<i<<" ";
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
