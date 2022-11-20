class Solution {
public:
    int calculate(string s) {
        
        // using stack
        // operations + - ( ) ' ' 
        int sum=0;
        int sign = 1;
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]>='0' && s[i]<='9')
            {
                int num=0;
                while(i<s.length() && (s[i]>='0' && s[i]<='9') )
                {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                sum+=(num*sign);
                i--;
            }
            else if(s[i]=='+')
            {
                sign=1;
                
            }
            else if(s[i]=='-')
            {
                sign =-1;
            }
            else if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }else if(s[i]==')')
            {
               
                 int n = st.top();
                st.pop();
                sum = sum*n;
                int m = st.top();
                st.pop();
                sum+=m;
                
                
            }
        }
        return sum;
    }
};