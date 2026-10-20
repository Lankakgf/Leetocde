class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length=0;
        int i=s.length()-1;
        //skip any trailong space at the end of  the string
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
        //count the characters of the last word
        while(i>=0 && s[i]!=' ')
        {
            length++;
            i--;
        }
        return length;
        
    }
};