class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        function<void(int)>solve=[&](int i)
        {
            if(i==nums.size())
            {
                ans.push_back(temp);
                return ;
            }
            //take element
            temp.push_back(nums[i]);
            solve(i+1);
            //skip element
            temp.pop_back();
            solve(i+1);
        };
        solve(0);
          return ans;
    }
};