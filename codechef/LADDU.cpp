#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int activity, points = 0;
    cin >> activity;
    string nationality;
    cin >> nationality;
    while(activity--)
    {
        string type;
        cin >> type;
        if(type=="CONTEST_WON")
        {
            points += 300;
            int rank;
            cin >> rank;
            points += (rank < 20) ? 20 - rank : 0;
        }
        if(type=="TOP_CONTRIBUTOR")
            points += 300;
        if(type=="BUG_FOUND")
        {
            int s;
            cin >> s;
            points += s;
        }
        if(type=="CONTEST_HOSTED")
            points += 50;
    }
    cout <<((nationality=="INDIAN")? points/200 : points/400 )<< "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
