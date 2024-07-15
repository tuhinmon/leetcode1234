class Solution {
public:
    void find(int index,set<vector<int>>&st, vector<int>res,vector<int>nums){
        if(index==nums.size()){
            st.insert(res);
            return ;
        }
        int ele = nums[index];
        res.push_back(ele);
        find(index+1,st,res,nums);
        res.pop_back();
        find(index+1,st,res,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>res;
        int index =0;
        find(0,st,res,nums);
        for(auto c :st){
            ans.push_back(c);
        }
        return ans;
        
    }
};