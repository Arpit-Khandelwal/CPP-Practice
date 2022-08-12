/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPalindrome(string s, int l, int r)
    {
        while (l < r)
            if (s[l++] != s[r--])
                return false;
        return true;
    }
    string checkAnagram(string s, int l, int r)
    {
        if (l == r || checkPalindrome(s, l, r))
            return s.substr(l,r-l+1);

        string s1 = checkAnagram(s, l, r - 1);
        string s2 = checkAnagram(s, l + 1, r);

        return (s1.length() > s2.length()) ? s1 : s2;
    }
    string longestPalindrome(string s)
    {

        int l = 0, r = s.length() - 1;

        return checkAnagram(s, l, r);
    }
    int main()
    {
        string s;
        cin >> s;
        cout << longestPalindrome(s);
        return 0;
    }
};
// @lc code=end

