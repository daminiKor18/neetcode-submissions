class Solution {
public:
bool dfs(int node,int parent, vector<vector<int>>&adj,vector<int>&visited)
{
    visited[node]=1;
    for(auto neighbor:adj[node])
    {
        if(neighbor==parent)
        {
            continue;
        }
        if(visited[neighbor])
        {
            return false;
        }
        if(!dfs(neighbor,node,adj,visited ))
        {
            return false;
        }
        
    }
    return true;
}
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1)
        {
            return false;
        
        }
        vector<vector<int>>adj(n);
        for(auto edge:edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int>visited(n,0);
        if(!dfs(0,-1,adj,visited))
        {
            return false;
        }

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                return false;
            }
        }
        
return true;


    }
};
