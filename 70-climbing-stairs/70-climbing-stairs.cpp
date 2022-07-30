class Solution {
public:
     int climbStairs(int n) {
        int t[n+1];
        t[0] =1;
        t[1] = 1;
        for(int i=2; i<n+1; i++) t[i] = t[i-1] + t[i-2];
        return t[n];
    }
};