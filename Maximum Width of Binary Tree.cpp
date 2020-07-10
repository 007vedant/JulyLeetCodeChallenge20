#define ui unsigned int
#define mp make_pair

// modified standard level order traversal where queue stored current nodes and its position for left
// width = pos(rightmost node) - pos(leftmost node) +1


class Solution {
public:
   
    
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) 
            return 0; 

        ui ans = 0; 
  
   
        queue<pair<TreeNode*,ui>> q; 
        q.push(mp(root,1));
        while (!q.empty()) {
            int count = q.size() ; 
            ans=max(ans,(q.back().second-q.front().second)+1);
            while (count--) { 
                pair<TreeNode*,ui>temp = q.front(); 
                q.pop(); 
       
                if (temp.first->left != NULL) 
                    q.push(mp(temp.first->left,2*temp.second));    
           
                if (temp.first->right != NULL) 
                    q.push(mp(temp.first->right,2*temp.second+1));
        
            } 
 
        
        }
        return ans;
    }
};