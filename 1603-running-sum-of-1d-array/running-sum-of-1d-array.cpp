class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        //start from the second element (index 1)
        for(int i=1;i<nums.size();i++)
        {
            //add the previous elements value to the current element
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
        
    }
};