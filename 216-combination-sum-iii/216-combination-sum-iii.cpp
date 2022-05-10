class Solution {
    
    vector<vector<int>> res;
    
public:
    
    int sum(vector<int>&v){
        int ans = 0;
        for(auto x: v){
            ans += x;
        }
        return ans;
    }
    
    void backTrack(int k, int n, vector<int>& v, int num){
        
        if(k == 0){
            if(sum(v) == n ){
                res.push_back(v);
            }
            return;
        }
        
        if(num > 9) return;
        
     v.push_back(num);  
        backTrack(k - 1, n, v, num + 1);
        v.pop_back();  
        backTrack(k, n, v, num + 1);    
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int>v;
        backTrack(k, n,v, 1);
        return res;
        
    }
};