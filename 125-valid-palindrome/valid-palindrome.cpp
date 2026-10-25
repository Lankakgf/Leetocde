class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
            //skip speacial characters from the left
            if(!isalnum(s[left]))
            {
                left++;
            }
            //skip speacial charcters from the right 
            else if(!isalnum(s[right]))
            {
                right--;
            }
            //compare letters or numbers 
            else
            {
                if(tolower(s[left])!=tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
        
    }
};