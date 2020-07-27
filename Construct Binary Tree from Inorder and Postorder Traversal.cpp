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
    TreeNode* constructTree(vector<int> &inorder, vector<int> &postorder, int start, int end, int postEnd){
        if(start > end)
            return NULL;
        
        TreeNode* root = new TreeNode(postorder[postEnd]);
        if(start == end)
            return root;
        
        int rootInd = 0;
        for(int i=0; i<inorder.size(); i++){
            if(inorder[i] == postorder[postEnd]){
                rootInd = i;
                break;
            }
        }
        
        root->left = constructTree(inorder, postorder, start, rootInd-1, postEnd-(end-rootInd)-1);
        root->right = constructTree(inorder, postorder, rootInd+1, end, postEnd-1);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return constructTree(inorder, postorder, 0, inorder.size()-1, postorder.size()-1);
        
    }
    
    // last root of postorder is the root node of tree. Hence find the index of last node of postorder
    // in inorder. This will will divide inorder into left and right subtrees of the root node. Recursively
    // do the same for left and right halfs.
};