class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string fir = strs[0];
        string last = strs[n - 1];
        
        for(int i = 0; i < fir.size(); i++){
            if(fir[i] == last[i]) ans += fir[i];
            else return ans;
        }
        return ans;

    }
};