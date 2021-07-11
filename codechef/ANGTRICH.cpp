#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    /*mistAKENLY THOUGHT a,b,c are sides 
    //check if a,b,c are valid sides of a triangle
    // logic- sum of any two sides of triangle>3rd side
    //more specifically, sum of least two sides should be > 3rd side

    //using general logic
    if((a+b < c) ||(b+c<a)||(a+c<b))
        cout << "NO";
    else
        cout << "YES";
    /* using specific logic
    int sum = a + b + c;
    int maxi=max(max(a, b), c);
    cout << ((maxi < sum - maxi)? "YES" : "NO");
    */
   if(a==0 || b==0 ||c==0)
       {
           cout << "NO";
            exit(0);
   }
   cout << ((a + b + c == 180) ? "YES" : "NO");
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
