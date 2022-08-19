long long int count(int S[], int size, int target) {

        long long int countWays[size+1][target+1];
        
        for(int j=0;j<=target;j++) countWays[0][j]=0;
        for(int i=0;i<=size;i++) countWays[i][0]=1;
        
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=target;j++)
            {
                if(S[i-1]<=j)
                {
                    countWays[i][j] = countWays[i][j-S[i-1]] + countWays[i-1][j];
                }
                else countWays[i][j] = countWays[i-1][j];
            }
        }
        
        return countWays[size][target];
        
        
    }