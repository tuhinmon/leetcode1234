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
//     void postorder(TreeNode*root,vector<int>&ans){
//         if(root == NULL){
//             return;
//         }
//         postorder(root->left,ans);
//         postorder(root->right,ans);
//         ans.push_back(root->val);
        
//     }
    vector<int> postorderTraversal(TreeNode* root) {
        // recursion approach  
        //T.C =0(N);
        // S.C =0(N);
        // vector<int>ans;
        // postorder(root,ans);
        // return ans;
        
        
        
        // itterative approach 
        // T.C =0(N);
       // S.C =0(N);
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode*cur = st.top();
            st.pop();
            ans.push_back(cur->val);
            if(cur->left!=NULL){
                st.push(cur->left);
            }
             if(cur->right!=NULL){
                st.push(cur->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};