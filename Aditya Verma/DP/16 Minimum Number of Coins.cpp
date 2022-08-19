int minCoins(int coins[], int M, int V) 
{ 
    // Your code goes here
    int dp[V+1];
    // memset(dp,INT_MAX, sizeof(dp));
    
    dp[0]=0;
    for(int i=1;i<=V;i++) dp[i]=INT_MAX;
    
    for(int i=1;i<=V;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(coins[j]<=i && dp[i-coins[j]]!=INT_MAX) dp[i]=min(dp[i], dp[i-coins[j]]+1);
        }
    }
    
    if(dp[V]==INT_MAX) return -1;
    else return dp[V];
} 