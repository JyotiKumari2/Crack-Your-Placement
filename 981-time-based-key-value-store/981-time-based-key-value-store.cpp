static int fast_io = [](){ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    return 0; 
}();
class TimeMap {
public:
    /** Initialize your data structure here. */
    unordered_map<string,vector<pair<string,int>>> h;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        h[key].emplace_back(value,timestamp);
    }
    
    string get(string key, int timestamp) {
        if(!h.count(key))
            return "";
        vector<pair<string, int>>& v = h[key]; 
        int lo = 0;
        int hi = v.size()-1;
        string result = "";
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            
            if(v[mid].second>timestamp)
                hi = mid-1;
            else{ // <= timestamp
                lo = mid+1;
                result = v[mid].first;
            }

        }
        return result;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */