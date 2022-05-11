class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n=cardPoints.size();
        vector<int>cumSum(n,0);
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=cardPoints[i];
            cumSum[i]=s;
        }
        if(n==k)
            return s;
        int score=0;
        int ans=0;
        //sliding window technique
        for(int i=0;i<=k;i++)
        {
            int j=i+n-k-1;
            if(i==0)
                ans=cumSum[j];
            else
            ans=cumSum[j]-cumSum[i-1];
            score=max(score,s-ans);
        }
        return score;
    }
};