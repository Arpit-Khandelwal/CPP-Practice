int firstBadVersion(int n) 
{


    //bruteforce by @shivam24-2000
    /*
        while(isBadVersion(n--));
        return n+2;
    */

    //binary search
    //runtime:0ms, mem: 6MB
    int l=1,h=n, mid;
    
    while(l<=h)
    {
        mid = l + (h-l)/2;
        if(isBadVersion(mid)) h = mid-1;
        else l = mid + 1;
    }
    return l;       
}