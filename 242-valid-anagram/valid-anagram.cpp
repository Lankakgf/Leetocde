class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        //sort both strings
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
//compare them
        return s==t;
        
    }
};