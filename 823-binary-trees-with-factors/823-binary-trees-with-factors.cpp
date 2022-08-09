class Solution {
public:
    const int MOD = 1e9+7;
    map<int,int> keeper;
    int f(int val,set<int>& s){
        if(keeper.count(val)){
            return keeper[val];
        }
        int ret = 1;
        for(auto x: s){
            if(val % x==0&&s.count(val/x)){
                long long int p = f(x,s);
                long long int q = f(val/x,s);
                long long int tmp = p*q;
                ret += (tmp %MOD);
                ret %= MOD;
            }
            if(x>val){
                break;
            }
        }
        keeper[val] = ret;
        return ret;
    }
    int numFactoredBinaryTrees(vector<int>& A) {
        set<int> s(A.begin(),A.end());
        int count = 0;
        for(auto x:s){
            count += f(x,s);
            count %=MOD;
        }
        return count;
    }
};