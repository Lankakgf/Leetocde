class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
     {
        int n=nums.size(); 
        vector<int>result(n);//create an array the same size
        int left=0; //pointer  at the beginning
        int right=n-1; //pointer at the end
        //fill the result array from back to front
        for(int i=n-1;i>=0;i--)
        {
            //compare the absolute values
            if(abs(nums[left])>abs(nums[right]))
            {
                result[i]=nums[left]*nums[left];
                left++;
            }
            else
            {
                result[i]=nums[right]*nums[right];
                right--;
            }
        }
        return result;
    }
};