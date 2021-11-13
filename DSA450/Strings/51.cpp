#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    string s1,s2;
    cin >> s1 >> s2;
    int l1 = s1.length(), l2 = s2.length();
    if(l1!=l2)
        return 0;
    int j = 0, i = 0;
    while(i<l1)
    {
        if(s1[i]==s2[j])            //ABCD
                                    //CABD
        {
            i++;
            j++;
            j %= l2;
        }
        else
            j++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}
