class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        if(ransomNote.length()>magazine.length())
        {
            return false;
        }
        int charCount[26]={0};
        //count avilable letter in magazine
        for(char c:magazine)
        {
            charCount[c-'a']++;
        }
        //check if we have enough leeter for ransomNote
        for(char c: ransomNote)
        {
            charCount[c-'a']--;
            if(charCount[c- 'a']<0)
            {
                return false;
            }
        }
        return true;
    }
};