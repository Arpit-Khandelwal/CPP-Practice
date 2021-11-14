#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int solve()
{
    char *str;
    cin>>str;
    int i=0;
    //Code here
    for(char s=str[i];i<strlen(str);i++)
    {
        if((int)s !=49 || (int)s!=48) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        cout<< solve()<<" ";
    }
    return 0;
}
