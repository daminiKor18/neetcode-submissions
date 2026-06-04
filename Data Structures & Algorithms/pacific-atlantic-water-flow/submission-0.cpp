class Solution {
public:
vector<pair<int,int>>direction{{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int r,int c, int previous,vector<vector<bool>>&reachable,vector<vector<int>>&heights)
{
    int m= heights.size();
    int n = heights[0].size();
    //base case
    if(r<0||r>=m||c<0||c>=n)
    {
        return;
    }
    if(reachable[r][c])
    {
        return;
    }
    if(heights[r][c]<previous)
    {
        return;
    }
    reachable[r][c]= true;
for(auto&dir :direction)
{
    int newr= r+dir.first;
    int newc= c+dir.second;
    dfs(newr,newc,heights[r][c],reachable,heights);
}
return;
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>>result;

        if(heights.empty()||heights[0].empty())
        {
            return result;
        }
        vector<vector<bool>>pacific(m,vector<bool>(n, false));
        vector<vector<bool>>atlantic(m,vector<bool>(n,false));

        for(int c=0;c<n;c++)
        {
            dfs(0,c,-1,pacific,heights);
            dfs(m-1,c,-1,atlantic,heights);
        }
        for(int r=0;r<m;r++)
        {
            dfs(r,0,-1,pacific,heights);
            dfs(r,n-1,-1,atlantic,heights);
        }

        for(int r=0;r<m;r++)
        {
            for(int c=0;c<n;c++)
            {
                if(pacific[r][c]&&atlantic[r][c])
                {
                    result.push_back({r,c});
                }
            }
        }
       return result; 
    }
};
