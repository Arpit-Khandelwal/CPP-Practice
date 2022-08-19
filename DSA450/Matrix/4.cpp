int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
{
	    // code here
	    
	    int count = 0, ans = -1;
	    for(int i=0;i<n;i++)
	    {
	        int tempCount=0;
	        for(int j=0;j<m;j++) tempCount += arr[i][j];
	        if(tempCount>count)
	        {
	            count = tempCount;
	            ans = i;
	        }
	    }
	    return ans;
	    
	}