/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


string numToWord(int n, string arr[], string ans)
{
    if(n==0)
    {
        return ans;
    }
    
    ans = arr[n%10]+" "+ans;
    
    return numToWord(n/10,arr,ans);
}

int main()
{
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<numToWord(520,arr,"");
    
    return 0;
}