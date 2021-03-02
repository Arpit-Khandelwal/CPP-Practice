#include<iostream>
using namespace std;
void fastinput(int &n)
{
    register int c = 0;
    bool neg = 0;
    n = 00;
    c=getchar();
    if(c=='-') {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 57 );c=getchar())
        n = n * 10 + c-48;
}
int main()
{
    int n;
    fastinput(n);
    int tram[n];
    int a, b;
    fastinput(a);
    fastinput(b);
    tram[0] = b-a;
    int max = tram[0];
    for (int i = 1; i < n;i++)
    {
        fastinput(a); 
        fastinput(b);
        tram[i] = tram[i - 1] - a + b;
        if(max<tram[i])
            max = tram[i];
    }
    cout << max;
}