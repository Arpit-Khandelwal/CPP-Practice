//https://leetcode.com/problems/unique-number-of-occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int count=1;
        vector<int> counter;
        int num=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]==num) count++;
            else
            {
                counter.push_back(count);
                num=arr[i];
                count=1;
            }
        }
        counter.push_back(count);
        sort(counter.begin(),counter.end());
        for(int i=1;i<counter.size();i++)
        {
            if(counter[i-1]==counter[i]) return false;
        }
        return true;
        
    }
};