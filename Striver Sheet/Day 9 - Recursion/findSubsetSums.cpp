void findSubsetSums(vector<int> arr, int N, int idx, int sum, vector<int> &ans)
    {
        if(idx==N) 
        {
            ans.push_back(sum);
            return;
        }
        
        findSubsetSums(arr,N,idx+1,sum+arr[idx],ans);
        findSubsetSums(arr,N,idx+1,sum,ans);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        
        findSubsetSums(arr,N,0,0,ans);
        return ans;
    }