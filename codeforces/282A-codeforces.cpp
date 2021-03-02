#include<iostream>
using namespace std;
int main()
{
    int x;
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n;i++) {
        cin >> s;
        if(s[1]=='+')
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}