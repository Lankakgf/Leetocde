class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int seen[128]={0};
        int left=0;
        int right=0;
        int max_len=0;
        while(s[right]!='\0')
        {
            if(seen[s[right]])
            {
                seen[s[left]]=0;
                left++;
            }
            else{
                seen[s[right]]=1;
                int current_len=right-left+1;
                if(current_len > max_len)
                {
                    max_len=current_len;
                }
                right++;
            }
        }
        return max_len;
    }
};