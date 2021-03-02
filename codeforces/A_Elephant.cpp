#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x<=5)
        cout << "1";
    else{
        int ans = x / 5;
        
        double check = x % 5;
        if (check == 0)
            cout << ans;
        else
            cout<<(++ans);
    }
}