//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        
        if(nums.size()<1) return 0;
        
        int check = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==check) nums[i]=200;           
            else check=nums[i];
        }
        sort(nums.begin(),nums.end());
        count=0;
        for(int i=0;i<nums.size();i++) if(nums[i]!=200) count++;
        return count;
    }
};