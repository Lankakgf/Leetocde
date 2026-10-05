class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map is generally faster than map for this use case
        unordered_map<int, int> mpp; 
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num;
            
            // Check if the difference we need is already in our map
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            
            // Add the current number and its index to the map
            mpp[num] = i; 
        }
        
        return {-1, -1};
    }
};