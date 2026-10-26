class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
     int low=0;
     int high=nums.size()-1;
     while(low<=high)
     {
     //find the middle index(prevents integer overflow) 
     int mid=low+(high-low)/2;
     if(nums[mid]==target)
     {
        return mid; //target found,return its index
     }  
     else if(nums[mid]<target)
     {
        low=mid+1; //target is on the right side
     }
     else
     {
        high=mid-1;//target is on the  left side
     }
    }
    //if target is not found ,'loe lands on the exact insertion index
    return low;
    }
};