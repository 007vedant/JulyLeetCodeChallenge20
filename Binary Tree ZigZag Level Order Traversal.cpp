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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        bool zigzag = 0;
        
        TreeNode* temp;
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> level;
            while(sz--){
                temp = q.front();
                q.pop();
                
                if(zigzag)
                    level.insert(level.begin(), temp->val);
                else
                    level.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);                
            }
            ans.push_back(level);
            zigzag ^= 1;
        }
        
        return ans;
        
    }
};/**
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        bool zigzag = 0;
        
        TreeNode* temp;
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> level;
            while(sz--){
                temp = q.front();
                q.pop();
                
                if(zigzag)
                    level.insert(level.begin(), temp->val);
                else
                    level.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);                
            }
            ans.push_back(level);
            zigzag ^= 1;
        }
        
        return ans;
        
    }
};