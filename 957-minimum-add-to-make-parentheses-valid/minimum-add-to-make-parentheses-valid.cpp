class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int open_needed=0;//tracks unmatched '('
        int close_needed=0;//tracks unmatched ')'
        for(char c:s)
        {
            if(c=='(')
            {
                open_needed++;
            }
            else
            {
                //c==')'
                if(open_needed>0)
                {
                    open_needed--;//match with a previous '('
                }
                else
                {
                    close_needed++;//no '(' available to match ,need to add one 
                }
            }
        }
        return open_needed+close_needed;
    }
};