class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        
        // solved using tutorial
        // Using stack
        
       // This Approach giving TLE 
//         vector<pair<char,int>>st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(st.empty())
//                   st.push_back({s[i],1});
//             else
//             {
//                 if(st.back().first==s[i])
//                 {
//                     int c=st.back().second;
//                     st.pop_back();
//                     st.push_back({s[i],++c});
//                 }
//                 else{
//                     st.push_back({s[i],1});
//                 }
//                 if(!st.empty() && st.back().second==k)
//                     st.pop_back();
//             }
//         }
//         string ans;
//         while(!st.empty())
//         {
//             char c=st.back().first;
//             int x=st.back().second;
//             while(x--)
//             {
//                 ans.push_back(c);
//             }
           
            
//         }
          
//         return ans;
        
        stack<pair<char,int>>st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                  st.push({s[i],1});
            else
            {
                if(st.top().first==s[i])
                {
                    int c=st.top().second;
                    st.pop();
                    st.push({s[i],++c});
                }
                else
                    st.push({s[i],1});
            }
            if(!st.empty()&& st.top().second==k)
                st.pop();
        }
        string ans;
        while(!st.empty())
        {
            char c=st.top().first;
            int x=st.top().second;
            while(x--)
            {
                ans.push_back(c);
            }
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};