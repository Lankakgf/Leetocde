class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        //sort the array
        sort(nums.begin(),nums.end());
        //check adjacent elements for duplicates
        for(int i=1;i<nums.size();i++)
            if(nums[i]==nums[i-1])
            {
                return true;//found a  duplicate
            }
            return false;
    }
   
};