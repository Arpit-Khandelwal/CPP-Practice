#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int myAtoi(string s)
{
    /* draft 1
    int l = s.length();
    long ans = 0;
    bool isNegative = false;
    int i = 0;

    while (s[i] == ' ' && i < l)
    {
        i++;
    }

    for (; i < l; i++)
    {

        if (s[i] == '+' || s[i] == ' ' || s[i] == '-')
        {
            if (s[i] == '-')
                isNegative = true;
            continue;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (ans > INT_MAX)
            {
                return (isNegative) ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + (s[i] - '0');
        }
        else
            break;
    }

    return ans * ((isNegative) ? -1 : 1);
*/

    //runtime 0ms
    long ans=0;
        int n=s.length();
        int i=0;
        while(i<n && s[i]==' ')i++;
        int sign = 1;
        if(i<n)
        {
            if(s[i]=='-')sign=-1,i++;
            else if(s[i]=='+')i++;
            
            while(i<n && isdigit(s[i]))
            {
                ans = ans*10 + (s[i]-'0');
                i++;
                if(ans > INT_MAX && sign == -1)return INT_MIN;
                if(ans > INT_MAX && sign ==1)return INT_MAX;
            }
        }
        ans*=sign;
        return ans;
    
}

void solve()
{
    char s[201];

    cin.getline(s, 201);

    cout << myAtoi(s) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
