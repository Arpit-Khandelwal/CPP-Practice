int minCoins(int coins[], int M, int V) 
{ 
    
    // Your code goes here
    int dp[V+1];
    // memset(dp,INT_MAX,sizeof(dp));
    for(int i=1;i<=V;i++) dp[i]=INT_MAX;
    dp[0]=0;	  
    
    for(int j=1;j<=V;j++)
        for(int i=0;i<M;i++) 
        {
            if(coins[i]<=j && dp[j-coins[i]]!=INT_MAX) dp[j] = min(dp[j], 1+dp[j-coins[i]]);
        }
    
    // for(int i:dp) cout<<i<<" ";
    
    return (dp[V]==INT_MAX)?-1:dp[V];
} 