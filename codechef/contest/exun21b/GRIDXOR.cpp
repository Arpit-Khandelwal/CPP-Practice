//https://www.codechef.com/EXUN21B/problems/GRIDXOR
#include <iostream>
#include<vector>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    vector<int> a(n,1);
    vector<vector<int>> arr(n,a);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";   //basically print all 1s
        cout<<endl;
    }
    cout<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
