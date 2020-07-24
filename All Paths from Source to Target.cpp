class Solution {
    vector<vector<int>> ans;
public:
    void dfs(int src, int tar, vector<vector<int>> &graph, vector<int> &path){
        path.push_back(src);
        if(src == tar){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        for(auto nei:graph[src])
            dfs(nei, tar, graph, path);
        
        path.pop_back();
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        int n = graph.size();
        dfs(0, n-1, graph, path);
        
        return ans;
    }
};

// simple backtracking/dfs approach. Recursively call dfs on the source and its neighbours
// and keep on constructing the path at start of recursive call and pop the last node of path during
// the tail of recursive call (backtrack for other solutions)