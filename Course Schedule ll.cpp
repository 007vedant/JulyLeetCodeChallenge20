class Solution {
public:
    
    bool toposort(int n, vector<int> &ans, vector<vector<int>> &adj) {
        vector<int> indegree(n, 0);
        for(auto vec:adj)
            for(int node:vec)
                indegree[node]++;
        
        queue<int> q;
        for(int i=0; i<n; i++)
            if(indegree[i] == 0)
                q.push(i);
        
        while(!q.empty()){
            int v = q.front(); q.pop();
            n--;
            ans.push_back(v);
            for(auto nei:adj[v])
                if(--indegree[nei] == 0)
                    q.push(nei);
        }
        
        return n==0; // if cycle was not detected
        
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans; // topological order
        vector<vector<int>> adj(numCourses);
        
        for(auto c:prerequisites)
            adj[c[1]].push_back(c[0]);
        
        if(!toposort(numCourses, ans, adj))
            return {};
        
        return ans;
        
    }
};