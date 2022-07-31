class Solution {
public:
    int trap(vector<int>& height) {
        
        int N = height.size();
        vector<int> left(N, 0), right(N, 0);
        
        left[0] = height[0];
        for(int i=1; i<N; i++){
            left[i] = max(left[i-1], height[i]);
        }
        
        right[N-1] = height[N-1];
        for(int i=N-2; i>=0; i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        int water = 0;
        for(int i=0; i<N; i++){
            water += min(left[i], right[i])-height[i];
        }
        return water;
    }
};