#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int pos[2];
    for(int i=0; i<5; i++)
    for(int j=0;j<5;j++)
    {
        cin>>arr[i][j];
        if(arr[i][j]==1) {pos[0]=i+1;pos[1]=j+1;}
    }
    int moves=abs(pos[0]-3)+abs(pos[1]-3);
    cout<<moves<<endl;
}