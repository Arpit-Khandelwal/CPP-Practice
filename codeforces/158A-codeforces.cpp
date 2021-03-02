#include<iostream>
using namespace std;
void main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    int min = a[k];
    int count =0;
    for (int i = 0; i < n;i++) if(i>=min && i>0)
            count++;
    cout << count;
}