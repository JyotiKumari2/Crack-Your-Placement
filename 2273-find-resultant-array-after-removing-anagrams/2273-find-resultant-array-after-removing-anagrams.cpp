class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string>ans;
        string prev,current;
        for(int i=0;i<words.size();i++)
        {
            if(i==0)
            {
                ans.push_back(words[i]);
                prev=words[i];
                sort(prev.begin(),prev.end());
            }
            else{
                current=words[i];
                sort(begin(current),end(current));
                if(prev==current)
                      continue;
                else
                {
                    prev=current;
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};