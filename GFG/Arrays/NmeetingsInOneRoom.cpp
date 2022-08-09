struct meeting{
        int e;
        int s;
        int pos;
    };
    static bool comp(struct meeting m1, struct meeting m2)
    {
        if(m1.e<m2.e) return true;
        else if(m1.e>m2.e) return false;
        else if(m1.pos<m2.pos) return true;
        return false;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting m[n];
        for(int i=0;i<n;i++)
        {
            m[i].s = start[i];
            m[i].e = end[i];
            m[i].pos = i;
        }
        
        sort(m, m+n, comp);
     
        int count = 1, lastEnd = m[0].e;
        for(int i=1;i<n;i++)
        {
            if(m[i].s>lastEnd)
            {
                lastEnd = m[i].e;
                count++;
            }
        }
        
        return count;
        // Your code here
    }