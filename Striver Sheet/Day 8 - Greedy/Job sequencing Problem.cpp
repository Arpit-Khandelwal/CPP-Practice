static bool comp(Job m1, Job m2)
    {
        return m1.profit>m2.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n, comp);
        // for(int i=0;i<n;i++) cout<<arr[i].dead<<" "<<arr[i].profit<<endl;
        
        int maxDeadline = 0;
        for(int i=0;i<n;i++) maxDeadline = max(maxDeadline, arr[i].dead);
        
        int jobSchedule[maxDeadline+1];
        memset(jobSchedule,-1,sizeof(jobSchedule));
        
        int count = 0, profit = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(jobSchedule[j]==-1)
                {
                    jobSchedule[j]=i;
                    count++;
                    profit += arr[i].profit;
                    break;
                }
            }
        }
        // return {count, jobSchedule};
        return {count, profit};
        
    } 