class Solution {
public:
    int maxArea(vector<int>& height) 
    {
    
            int left=0;
            int right=height.size()-1;
            int max_water=0;
            while(left<right)
            {
                //calculate the area between the current left and right pointers
                int current_height=min(height[left],height[right]);
                int current_width=right-left;
                int current_area=current_height*current_width;
                //update the maximum area found so far
                max_water=max(max_water,current_area);
                //move the pointer of the shorter line inward to seek a taller line
                if(height[left]<height[right])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }

        return max_water;
    }
};