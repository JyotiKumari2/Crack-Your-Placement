class Solution {
    bool isPalindrome(string s)
    {
        int l=0;
        int h=s.length()-1;
        while(l<=h)
        {
            if(s[l]!=s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
public:
    int removePalindromeSub(string s) {
        
        if(s.empty())
             return 0;
        if(isPalindrome(s))
             return 1;
        else
            return 2;
    }
};