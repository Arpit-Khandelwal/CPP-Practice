//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int sumArray(int arr[], int n)
  {
      if(n==0) return 0;
      return arr[n-1]+sumArray(arr,n-1); 
  }
 
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    //find array sum
	    int sum = sumArray(arr,n);
	    
	    //find all possible subset sums of arr
	    bool subsetSum[n+1][sum+1];
	   // findSubsetSum(arr,n,sum,&subsetSum);
	   //initialization
      for(int j=0;j<=sum;j++) subsetSum[0][j] = false;;
      for(int i=0;i<=n;i++) subsetSum[i][0] = true;
      
      //top-down
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=sum;j++)
          {
              if(arr[i-1]<=j)
                subsetSum[i][j] = subsetSum[i-1][j] || subsetSum[i-1][j-arr[i-1]];
            else
                subsetSum[i][j] = subsetSum[i-1][j];
          }
      }
	   // for(int i=0;i<=n;i++)
	   // {
	   //     for(int j=0;j<=sum;j++) cout<<subsetSum[i][j]<<" ";
	   //     cout<<endl;
	   // }
	    //store possible subset sums of given array
	    vector<int> possibleSubsetSums;
	    for(int j=0;j<=sum/2;j++) if(subsetSum[n][j]) possibleSubsetSums.push_back(j);
	   // for(int i: possibleSubsetSums) cout<<i<<" ";
// 	    int minSum=INT_MAX;
// 	    for(int i:possibleSubsetSums)
// 	    {
// 	        minSum = min(minSum, sum-2*i);
// 	    }
	    
// 	    return minSum;
	   return sum - 2*possibleSubsetSums.back();

	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
