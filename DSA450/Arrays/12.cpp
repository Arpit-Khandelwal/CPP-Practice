#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void mergeArray(int arr1[], int n, int arr2[], int m)
{
    //bruteforce
    /*
    for (int i = 0; i < n;i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i], arr2[0]);
            //sort(arr2,arr2+m) can be done instead of following lines, but takes more time
            int k = 1, temp = arr2[0];
            while(arr2[k]<temp && k<m)
                arr2[k - 1] = arr2[k++];    //push elements forward to put arr2[0],which was originally arr1[i], in the sorted position in arr2
            arr2[k - 1] = temp;
        }
    }
    */

    //gap method - compare elements with gap and swap if arr1[i]<arr1/arr2[i+gap]
    int gap = ceil((n + m) / 2);
    while (gap > 0)
    {
        for (int i = 0; i < n; i++)
        {
            int secondIndex = gap + i;
            if (secondIndex < n)
            {
                if (arr1[i] > arr1[secondIndex])
                    swap(arr1[i], arr1[secondIndex]);
            }
            else if (secondIndex < n + m)
            {
                if (arr1[i] > arr2[secondIndex - n])
                    swap(arr1[i], arr2[secondIndex - n]);
            } //add logic for similar type of sorting in arr2
            else
                break;
        }
        gap /= 2;
    }
    sort(arr1, arr1 + n);   //need to eliminate this
    sort(arr2, arr2 + m);   //need to eliminate this
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];

    mergeArray(arr1, n, arr2, m);

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    for (int j = 0; j < m; j++)
        cout << arr2[j] << " ";

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
