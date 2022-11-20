class Solution {
public:
    string simplifyPath(string path) {
        
        int n=path.length();
        stack<string>s;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
                  continue;
            string temp="";
            while(i<path.length() && path[i]!='/')
            {
                temp+=path[i];
                i++;
            }
            if(temp==".")
                  continue;
            else if(temp=="..")
            {
                if(!s.empty())
                     s.pop();
            }
            else
                s.push(temp);
        }
        string res ;
        while(!s.empty())
        {
            res = "/" + s.top() + res;
            s.pop();
        }
        if(res=="")
            return "/";
        else
        {
             
            return res;
        }
    }
        
};