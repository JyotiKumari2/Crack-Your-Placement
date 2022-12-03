class Solution {
public:
    string frequencySort(string s) {

    unordered_map<char,int> mp;
    for(auto &c:s)
        mp[c]++;
    
    int size = mp.size();
    string op = "";
    while(size--)
    {
        auto it = std::max_element(mp.begin(),mp.end(),[](const std::pair<char,int> &p1,const std::pair<char,int> &p2)
                                   { return p1.second < p2.second;}
                                  );
        op.append(it->second,it->first);
        mp.erase(it);
    }
    return op;
}
};