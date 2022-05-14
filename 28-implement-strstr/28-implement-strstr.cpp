class Solution {
public:
    int strStr(string haystack, string needle) {
         if ((needle == "" && haystack =="") || needle =="" )
             return 0;
       return haystack.find(needle);
    }
};