class Solution {
public:
    void findsubsets( vector<vector<int>>&ans,vector<int>res,int i,vector<int>nums){
        if(i>=nums.size()){
            ans.push_back(res);
            return;
     }
        // exclude 
        findsubsets(ans,res,i+1,nums);
        // include
        int index = nums[i];
        res.push_back(index);
        findsubsets(ans,res,i+1,nums);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        int i=0;
        findsubsets(ans,res,i,nums);
        return ans;
        
        
    }
};