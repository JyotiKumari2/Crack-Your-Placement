class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, j = 0, maxlen = 1;
        int n = s.size();

       
        unordered_map<char, int> mpp;
 
        if (n == 0) 
            return 0;

        while (j < n)
        {  
            mpp[s[j]]++;

            
            if (mpp[s[j]] > 1)
            {
       
                while (mpp[s[j]] > 1)
                {
                    mpp[s[i]]--;
                    i++;
                }
            }
            
            maxlen = max(maxlen, j - i + 1);
            j++;
        }

        return maxlen;
    }
};