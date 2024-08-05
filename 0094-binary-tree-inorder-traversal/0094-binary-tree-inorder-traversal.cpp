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
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
       vector<int> inorderTraversal(TreeNode* root) {
           vector<int>ans;
           inorder(root,ans);
           return ans;
            






        // itterative way 
        // T.C =0(N);
        // S.C =0(N);

        // vector<int>ans;
        // stack<TreeNode*>st;
        // TreeNode*node = root;
        // while(!st.empty() || node!=NULL){
        //     if(node!=NULL){
        //         st.push(node);
        //         node=node->left;
        //     }
        //     else{
        //         node = st.top();
        //         st.pop();
        //         ans.push_back(node->val);
        //         node = node->right;
        //     }
        // }
        // return ans;



        // morris inorder tarversal 
        // T.C =0(N);
        // S.C =0(1);
//         vector<int>ans;
//         TreeNode*cur = root;
//         while(cur!=NULL){
//             if(cur->left==NULL){
//                 ans.push_back(cur->val);
//                 cur=cur->right;

//             }
//             else{
//                 TreeNode*prev = cur->left;
//                 while( prev->right!=NULL && prev->right!=cur){
//                     prev = prev->right;
//                 }
//                 if(prev->right==NULL){
//                     prev->right = cur;
//                     cur = cur->left;


//                 }
//                 else{
//                     prev->right = NULL;
//                     ans.push_back(cur->val);
//                     cur = cur->right;
//                 }


//             }


//         }
//         return ans;


        
    }
};