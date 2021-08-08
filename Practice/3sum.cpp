#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

 vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int> > res;

    std::sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
        
        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        while (front < back) {

            int sum = num[front] + num[back];
            
            // Finding answer which start from number num[i]
            if (sum < target)
                front++;

            else if (sum > target)
                back--;

            else {
                vector<int> triplet = {num[i], num[front], num[back]};
                res.push_back(triplet);
                
                // Processing duplicates of Number 2
                // Rolling the front pointer to the next different number forwards
                while (front < back && num[front] == triplet[1]) front++;

                // Processing duplicates of Number 3
                // Rolling the back pointer to the next different number backwards
                while (front < back && num[back] == triplet[2]) back--;
            }
            
        }

        // Processing duplicates of Number 1
        while (i + 1 < num.size() && num[i + 1] == num[i]) 
            i++;

    }
    
    return res;
    }
void solve()
{
    int n;
    cin >> n;
    int j;
    vector<int> arr;
    for (int i = 0; i < n; i++) 
    {
        cin >> j;
        arr.push_back(j);
    }
    vector<vector<int>> ans = threeSum(arr);
    for(auto x:ans)
    {
        for(auto y: x)
            cout << y << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
