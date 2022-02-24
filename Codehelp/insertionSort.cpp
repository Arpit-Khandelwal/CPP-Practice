#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // for loop variation
        /*
            for(;j>=0;j--)
            {
                if(arr[j]>temp) arr[j+1]=arr[j];
                else break;
            }
        */
        arr[j + 1] = temp;
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    insertionSort(n, arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

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
