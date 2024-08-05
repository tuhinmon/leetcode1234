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
    // void preorder(TreeNode*root,vector<int>&ans){
    //     if(root==NULL){
    //         return;
    //     }
    //     ans.push_back(root->val);
    //     preorder(root->left,ans);
    //     preorder(root->right,ans);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        // recursion 
        // T.C =0(N);
        // S.C =0(N);
        // vector<int>ans;
        // preorder(root,ans);
        // return ans;
        
        // itterative approach 
        
        // T.C =0(N);
        // S.C =0(N);
        // vector<int>ans;
        // stack<TreeNode*>st;
        // if(root==NULL){
        //     return ans;
        // }
        // st.push(root);
        // while(!st.empty()){
        //     TreeNode*temp = st.top();
        //     st.pop();
        //     ans.push_back(temp->val);
        //     if(temp->right!=NULL){
        //         st.push(temp->right);
        //     }
        //     if(temp->left!=NULL){
        //         st.push(temp->left);
        //     }
        // }
        // return ans;
        
        
        
        // morrics preorder tarversal 
        // T.C =0(N);
        // S.C =0(1);
        vector<int>ans;
        TreeNode*cur = root;
        while(cur!=NULL){
            if(cur->left==NULL){
                ans.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode*temp = cur->left;
                while(temp->right!=NULL && temp->right!=cur){
                    temp = temp->right;
                }
                if(temp->right==NULL){
                    temp->right = cur;
                    ans.push_back(cur->val);
                    cur = cur->left;
                }
                else{
                    temp->right = NULL;
                    cur = cur->right;
                }
            }
        }
        return ans;
        
        
    }
};