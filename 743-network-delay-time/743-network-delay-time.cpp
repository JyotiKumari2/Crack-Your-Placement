class Solution {
public:
    
    vector<pair<int, int>> adj[101];
    
    void DFS(vector<int>& signalReceivedAt, int currNode, int currTime) {
        
        if (currTime >= signalReceivedAt[currNode]) {
            return;
        }

       
        signalReceivedAt[currNode] = currTime;
        
       
        for (pair<int, int> edge : adj[currNode]) {
            int travelTime = edge.first;
            int neighborNode = edge.second;
            
        
            DFS(signalReceivedAt, neighborNode, currTime + travelTime);
        }
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       
        for (vector<int> time : times) {
            int source = time[0];
            int dest = time[1];
            int travelTime = time[2];
            
            adj[source].push_back({travelTime, dest});
        }
        
       
        for (int i = 1; i <= n; i++) {
            sort(adj[i].begin(), adj[i].end());
        }
        
        vector<int> signalReceivedAt(n + 1, INT_MAX);
        DFS(signalReceivedAt, k, 0);
        
        int answer = INT_MIN;
        for (int node = 1; node <= n; node++) {
            answer = max(answer, signalReceivedAt[node]);
        }
        
 
        return answer == INT_MAX ? -1 : answer;
    }
};