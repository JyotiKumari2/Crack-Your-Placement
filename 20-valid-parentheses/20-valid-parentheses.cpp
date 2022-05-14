class Solution {
public:
    bool matching(char a,char b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<char>S;
        for(char x : s)
        {
            if(x=='(' || x=='{' || x=='[')
                S.push(x);
            else
            {
                if(S.empty()==true)
                    return false;
                if(matching(S.top(),x)==false)
                    return false;
                else
                    S.pop();
            }
        }
        return (S.empty()==true);
    }
};