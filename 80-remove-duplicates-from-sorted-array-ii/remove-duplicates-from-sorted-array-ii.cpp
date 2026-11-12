class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        //if the array has 2 or fewer elements
        if(nums.size()<=2)
        {

            return nums.size();
    }
    //k is the index for placing the next valid element
    //start at 3 because the first two elemnt are always valid 
    int k=2;
    for(int i=2;i<nums.size();i++)
    {
        //check if the current element is dufferent from the element
        //two places behind in our valid section of the  array
        if(nums[i]!=nums[k-2])
        {
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
    }
};