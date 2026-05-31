class Solution {
public:

void dfs(vector<vector<char>>&grid,int row,int coln)
{
    int n= grid.size();
    int m = grid[0].size();
    //base case
    if(row<0||coln<0||row>=n||coln>=m||grid[row][coln]=='0')
    {
        return;
    }
    //mark as visited
    grid[row][coln]='0';
    //check 4 directions
    dfs(grid,row+1,coln);
    dfs(grid,row-1,coln);
    dfs(grid,row,coln+1);
    dfs(grid,row,coln-1);
}
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int n = grid.size();
        int m =grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
        
    }
};
