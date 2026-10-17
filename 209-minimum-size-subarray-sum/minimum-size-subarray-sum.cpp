class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int left=0;
        int current_sum=0;
        int min_length=INT_MAX;
        for(int right=0;right<nums.size();right++)
        {
            current_sum+=nums[right]; //Expand the window
            //shrink the window from the left as ling as  the conddition is met
            while(current_sum>=target)
            {
                min_length=min(min_length,right-left+1);
                current_sum-=nums[left];
                left++;
            }
        }
        //if min_length was never updated,
        return min_length==INT_MAX ? 0:min_length;
        
    }
};