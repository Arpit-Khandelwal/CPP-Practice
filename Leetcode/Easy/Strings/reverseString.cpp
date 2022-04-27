#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{

    int l = s.size();
    for (int i = 0; i < l / 2; i++)
        swap(s[i], s[l - i - 1]);

    /*
    //using 2 pointers
    int l=0,r=s.size()-1;
    while(l<r) swap(s[l++],s[r--]);
    */


}