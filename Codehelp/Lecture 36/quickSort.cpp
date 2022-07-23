#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    int p = 0;
    int count = 0;

    for (int i = s + 1; i <= e; i++)
        if (arr[i] <= arr[s])
            count++;

    p = s + count;

    swap(arr[p], arr[s]);

    int i = s, j = e;
    while (i < p && j > p)
    {
        while (arr[i] <= arr[p])
            i++;
        while (arr[j] > arr[p])
            j--;
        if (i < p && j > p)
            swap(arr[i++], arr[j--]);
    }
    return p;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int n = 6;
    int arr[] = {2, 4, 1, 6, 9, 3};

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}