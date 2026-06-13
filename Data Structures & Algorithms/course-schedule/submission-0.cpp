class Solution {
public:
bool dfs(int node, vector<vector<int>>&adj,vector<int>&visited,vector<int>&pathvisited)
{
    visited[node]=1;
    pathvisited[node]=1;
    for(auto neighbor:adj[node])
    {
        if(!visited[neighbor])
        {
            if(dfs(neighbor,adj,visited,pathvisited))
            {
                return true;
            }
        }
        else if(pathvisited[neighbor])
        {
            return true;
        }


    }
    pathvisited[node]=0;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
     {
        vector<vector<int>>adj(numCourses);
        for(auto p: prerequisites)
        {
            int course=p[0];
            int preq = p[1];
            adj[preq].push_back(course);

        }
         vector<int>visited(numCourses,0);
        vector<int>pathvisited(numCourses,0);
        for(auto i=0;i<numCourses;i++)
        {
            if(!visited[i])
            {
                if(dfs(i,adj,visited,pathvisited))
                {
                    return false;
                }
            }
        }
        return true;
        

        
    }
};
