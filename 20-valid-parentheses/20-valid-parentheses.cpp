class Solution {
public:
    bool checkPair(char c1, char c2)
    {
        return ((c1=='(' && c2 == ')') || (c1=='{' && c2 == '}') || (c1=='[' && c2 == ']')) ;
           
    }
    bool isValid(string s) {
        
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' ||    s[i]=='{'  || s[i]=='['  )
                  st.push(s[i]);
            else{
                if(st.empty())
                     return false;
                else if(checkPair(st.top(),s[i]))
                   st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else 
            return false;
        
        
    }
};



