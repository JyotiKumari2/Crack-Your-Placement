class Solution {
public:
  bool closeStrings(string word1, string word2) {
    int n1 = word1.size();
    int n2 = word2.size();
    
    if (n1 != n2) return false;
    
    std::map<char, int> scan1;
    std::map<char, int> scan2;
    
    for(auto& c : word1) {
        ++scan1[c];
    }
    
    for(auto& c : word2) {
        ++scan2[c];
    }
    
    vector<int> array1;
    vector<int> array2;
    
    for(auto& it : scan1) {
        array1.push_back(it.second);
    }
    
    for(auto& it: scan2) {
        array2.push_back(it.second);
        
        if (scan1.find(it.first) == scan1.end()) {  
            return false;
        }
    }
    
    std::sort(array1.begin(), array1.end());
    std::sort(array2.begin(), array2.end());
    
    return array1 == array2;
}
};