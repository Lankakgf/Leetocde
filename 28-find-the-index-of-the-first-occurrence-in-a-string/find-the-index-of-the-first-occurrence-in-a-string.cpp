class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int index=haystack.find(needle);
        if(index!=string::npos)
        {
            return index;
        }
        //if it doesnot  find the needle,it returns a speacial value called string::npos
        if(index!=string::npos)
        {
            return index;
        }
        //if not found,return -1 as requested
        return -1;
        
    }
};

/*
class Solution
{
    int strStr(string haystack,string needle)
    {
        int m==haysstack.length();
        int n=needle.length()
        //if the needle is longer than the haystack,its impossible to find
        if(n>m) return -1
        //slide a window of size 'n' across the haystack
        for(int i=0;i<=m-n;i++)
        {
            //extract a part of the haystack starting at i, with length n
            //and check if it exactley matches our needle 
            if(haystack.substr(i,n)==needle)
            {
            return i;
            }
        }
        return -1;//never found a match
    }
}
*/
