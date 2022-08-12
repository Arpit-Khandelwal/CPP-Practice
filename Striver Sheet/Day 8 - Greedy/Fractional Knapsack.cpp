
class Solution
{
    public:
    static bool comp(Item i1, Item i2)
    {
        if(i1.value/(double)i1.weight > i2.value/(double)i2.weight) return true;
        return false;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        int wt=0;
        double val=0;
        
        sort(arr,arr+n, comp);
        
        
        for(int i=0;i<n;i++)
        {
            if(wt+arr[i].weight<=W)
            {
                wt += arr[i].weight;
                val += arr[i].value;
            }
            else
            {
                int leftWeight = W-wt;
                val += arr[i].value * leftWeight/(double)arr[i].weight;
                break;
            }
        }
        
        return val;
        
    }
        
};
