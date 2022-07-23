#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    
}

void quickSort(int arr[], int s, int e)
{
    if(s>=e) return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p);
    quickSort(arr, p + 1, e);
}

int main()
{

}