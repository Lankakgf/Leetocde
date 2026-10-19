class Solution
{
    public:
    vector<int>findSubstring(string s,vector<string>& words)
    {
        vector<int>result;
        if(s.empty() || words.empty()) return result;

       int numWords=words.size();
       int wordLen=words[0].size();
       int n=s.length();
       //count the frequency of each word in the given list
       unordered_map<string,int>wordCount;
       for(const string& word:words)
       {
        wordCount[word]++;
       }
       //run a sliding window for each possible  starting offset
       //the offset ranges from 0 to wordLen-1
       for(int i=0;i<wordLen;++i)
       {
       int left=i; //left boundary of our sliding window
       int count=0;
       unordered_map<string,int>seen; //words seen in current window
       //move the right boundary of the window by wordLen each time
       for(int right=i;right<=n-wordLen;right+=wordLen)
       {

       
       string currentWord=s.substr(right,wordLen);
       //if the word is one of the target words 
       if(wordCount.count(currentWord))
       {
        seen[currentWord]++;
        count++;
        //if we have seen this word too many times
        while(seen[currentWord]>wordCount[currentWord])
        {
            string leftWord=s.substr(left,wordLen);
            seen[leftWord]--;
            count--;
            left+=wordLen;
        }
        if(count==numWords)
        {
            result.push_back(left);
        }

    }
       else
       {
        seen.clear();
        count=0;
        left=right+wordLen;
       }
    }
}
return result;
}
};