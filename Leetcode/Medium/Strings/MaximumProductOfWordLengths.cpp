#include <bits/stdc++.h>
using namespace std;

int getState(string s)
{
    int state = 0;
    for (char i : s)
    {
        state = state | (1 << (i - 'a'));
    }
    return state;
}
int maxProduct(vector<string> &words)
{

    // Runtime: 37 ms, faster than 96.98% Memory Usage: 16.4 MB, less than 47.92%
    int n = words.size();
    int state[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
        state[i] = getState(words[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((state[i] & state[j]) == 0)
            {
                int cmp = words[i].length() * words[j].length();
                ans = max(ans, cmp);
            }

    return ans;
}

int main()
{
    vector<string> words = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    cout << maxProduct(words) << endl;
}