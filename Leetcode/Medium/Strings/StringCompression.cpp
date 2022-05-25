//https://leetcode.com/problems/string-compression/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int compress(vector<char> &chars)
{

    int l = chars.size();

    // vector<char> ans;
    int count = 1, k = 0;
    for (int i = 0; i < l; i += count)
    {
        count = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (chars[i] == chars[j])
                count++;
            else
                break;
        }
        chars[k++] = chars[i];

        if (count == 1)
            continue;
        else
        {
            string ans = to_string(count);
            for (char i : ans)
                chars[k++] = i;
        }
    }
    // chars.erase(chars.begin()+k,chars.end());
    return k;
}

void solve()
{
    int n;
    cin >> n;
    vector<char> chars(n);
    for (int i = 0; i < n; i++)
        cin >> chars[i];
    int k = compress(chars);
    for (int i = 0; i < k; i++)
        cout << chars[i];
    cout << endl;
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
