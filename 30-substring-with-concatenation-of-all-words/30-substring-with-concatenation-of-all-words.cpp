class Solution {
public:
   vector<int> findSubstring(string S, vector<string> &L) {
   vector<int> ret;
   if (L.empty()) return ret;
   unordered_map<string,int> m;
   for (int i = 0; i < L.size(); ++i) m[L[i]]++;
   int K = L[0].size();
   for (int k = 0; k < K; ++k) {
        int i = k;  int start = i;
        while(i+K <= S.size()) {
            string s = S.substr(i,K);
            if (m.find(s) != m.end()) {
                if (m[s] != 0) {
                    m[s]--; i += K;
                    if (i-start == L.size()*K) 
                        ret.push_back(start);
                } else {
                        m[S.substr(start,K)]++; start += K; 
                }
            } else {  
                while(start < i) {
                    m[S.substr(start,K)]++; start += K;
                }
                i += K; start = i;
            }
        }
        while(start < i) { 
           m[S.substr(start,K)]++; start += K;
        }
   }
   return ret;
}
};