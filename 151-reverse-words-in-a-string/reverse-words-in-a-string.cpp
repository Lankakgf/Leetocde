class Solution {
public:
    string reverseWords(string s)
     {
        stringstream ss(s);
        string word;
        string ans= "";
        ///extract words one by one, ignoring extra spaces automatically
        while(ss>>word)
        {
            if(ans== "")
            {
                ans=word;
            }
            else
            {
                //add the new word to the front of our answer
                ans=word+ " " +ans;
            }
        }
        return ans;
    }
};