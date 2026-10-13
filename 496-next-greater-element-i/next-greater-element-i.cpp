class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int>next_greater;//maps a number to it next  greater number
        stack<int>st;//keeps track of numbers waiting for a grater number
        
        //step1: fund next  greater for all elements in nums2
        for(int num:nums2)
        {
            //if current  number  is greater than the top of  the stack 
            //it is the "next greater "for that top element.

            while (!st.empty()&& st.top()<num)
            {
                next_greater[st.top()]=num;
                st.pop();
            }
            //push current number to stack to wait  for  its next greater element
            st.push(num);
        }
        //step2:build the asnwer for nums2 using the map
        vector <int>ans;
        for(int num:nums1)
        {
            if(next_greater.count(num))
            {
                ans.push_back(next_greater[num]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
        
    }
};