class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
         
        for(int i=0;i<s.length();i++)
        {
            if(s1.empty() && s[i]=='#')
                continue;
               if(s[i]=='#' && i!=0)
               {
                   s1.pop();
               }
              else
                s1.push(s[i]);
        }
        for(int i=0;i<t.length();i++)
        {
            if(s2.empty() && t[i]=='#')
                continue;
            if(t[i]=='#' && i!=0)
                   s2.pop();
            else
                s2.push(t[i]);
        }
         if(s1==s2)
             return true;
        else
            return false;
    }
};