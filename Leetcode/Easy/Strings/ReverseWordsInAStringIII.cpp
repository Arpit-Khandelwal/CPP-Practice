#include <bits/stdc++.h>
using namespace std;

void reverse(string *s, int l, int r)
{
    while (l < r)
    {
        swap(s[l++], s[r--]);
    }
}

string reverseWords(string s)
{

    int start = 0, i;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            int pos = i;
            while (start < pos)
                swap(s[start++], s[--pos]);
            start = i + 1;
        }
    }

    while(start<i) swap(s[start++], s[--i]);

    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
}