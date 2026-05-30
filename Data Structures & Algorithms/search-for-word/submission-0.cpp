class Solution {
public:
bool dfs(vector<vector<char>>&board,string word, int row,int coln,int index)
{
    //if word is completed
    if(index==word.size())
    {
        return true;
    }
    //invalid conditions
    if((row<0|| coln<0)||
    (row>=board.size())||
    (coln>=board[0].size())||
    board[row][coln]!=word[index])
    {
        return false;
    }

    //store current character
    char temp = board[row][coln];
    //mark visited
    board[row][coln]='#';
    //check 4 directions
   bool found= dfs(board,word,row+1,coln,index+1)||
     dfs(board,word,row-1,coln,index+1)||
      dfs(board,word,row,coln+1,index+1)||
       dfs(board,word,row,coln-1,index+1);
       //backtrack
       board[row][coln]=temp;

return found;



}
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int coln= board[0].size();
        //start dfs for every node
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<coln;j++)
            {
               if(dfs(board,word,i,j,0))
               {
                return true;
               }
            }
        }
        return false;
        
    }
};
