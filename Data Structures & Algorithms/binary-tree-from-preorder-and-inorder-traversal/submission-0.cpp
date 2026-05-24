/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:  
 int preindx= 0;
TreeNode* build(vector<int>& preorder, vector<int>& inorder,int start,int end)
{
    
    if(start>end)
    {
        return NULL;
    }
    int rootvalue= preorder[preindx++];
    TreeNode*root= new TreeNode(rootvalue);
    //find root in inorder
    int index= start;
    while(inorder[index]!=rootvalue)
    {
        index++;
    }
    root->left = build(preorder,inorder,start,index-1);
    root->right = build(preorder,inorder,index+1,end);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
      int  n =inorder.size();
        return build(preorder,inorder,0,n-1);
        
    }
};
