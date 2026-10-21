class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>result;
        if(matrix.empty()) return result;
        int top=0, bottom=matrix.size()-1;
        int left=0,right=matrix[0].size()-1;
        while(top<=bottom && left<=right)
        {
        //move right (along the  top boundary)
        for(int i=left;i<=right;i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;
        //move down(along the right boundary)
        for(int i=top;i<=bottom;i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;
        //move left (along the  bottom boundary)
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        //move up (along the left boundary)
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        
    }
    return result;
    }
};