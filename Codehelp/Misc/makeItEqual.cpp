//https://www.codingninjas.com/codestudio/contests/love-babbar-contest-3/problems/16572?leftPanelTab=0

int makeItEqual(int a, int b, int c) {
    // Write your code here.
    int count=0;
    while(a||b||c)
    {
        if(c&1)
        {
            if(!(a&1)) count++;
            if(!(b&1)) count++;
        }
        else
        {
            if(a&1 && b&1) count++;
        }
        //cout<<count<<" ";
        a>>=1;
        b>>=1;
        c>>=1;
       // cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return count;
}
