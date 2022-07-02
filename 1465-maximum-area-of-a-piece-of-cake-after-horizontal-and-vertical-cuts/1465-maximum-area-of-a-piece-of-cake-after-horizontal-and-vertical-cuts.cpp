#define M 1000000007
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {   
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
		int maxh = horizontalCuts[0];
        for(int i=1; i<horizontalCuts.size(); i++){
            maxh = max(maxh, horizontalCuts[i] - horizontalCuts[i-1]);
        }
        
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
		int maxv = verticalCuts[0];
        for(int i=1; i<verticalCuts.size(); i++){
            maxv = max(maxv, verticalCuts[i] - verticalCuts[i-1]);
        }
		
        return (1LL*maxh*maxv) % M;  
    }
};
 