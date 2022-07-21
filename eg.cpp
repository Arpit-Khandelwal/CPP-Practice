#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[200001][200001];
int fnc(stack<char> st, string s, int a)
{
    int b = st.size();
    if (dp[a][b] != -1)
    {
        return dp[a][b];
    }
    if (a == s.length())
    {
        if (st.empty())
        {
            dp[a][b] = 1;
            return 1;
        }
        else
        {
            dp[a][b] = 0;
            return 0;
        }
    }
    if (s[a] == '?')
    {
        if (st.empty())
        {
            st.push('(');
            dp[a][b] = fnc(st, s, a + 1);
            return dp[a][b];
        }
        else
        {
            int x, y;
            st.push('(');
            x = fnc(st, s, a + 1);
            st.pop();
            st.pop();
            y = fnc(st, s, a + 1);
            dp[a][b] = x + y;
            return x + y;
        }
    }
    else if (s[a] == '(')
    {
        st.push('(');
        dp[a][b] = fnc(st, s, a + 1);
        return dp[a][b];
    }
    else
    {
        if (st.empty())
        {
            dp[a][b] = 0;
            return 0;
        }
        else
        {
            st.pop();
            dp[a][b] = fnc(st, s, a + 1);
            return dp[a][b];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        memset(dp, -1, sizeof(dp));
        string s;
        cin >> s;
        stack<char> st;
        if (fnc(st, s, 0) == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}