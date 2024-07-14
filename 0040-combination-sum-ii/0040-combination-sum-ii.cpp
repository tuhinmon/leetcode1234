class Solution {
public:
    void find(int index, vector<vector<int>>&ans, vector<int>&res,vector<int>&candidates,int target){
       if(index==candidates.size()){
        if(target==0){
            ans.push_back(res);
     }
    return ;
}
        
        if(target>=candidates[index] ){
            int ele =candidates[index];
            res.push_back(ele);
            find(index+1,ans,res, candidates,target-candidates[index]);
            res.pop_back();
             while(index<candidates.size()-1 && candidates[index]==candidates[index+1]){
                index++;
     }
            
     }
        
        find(index+1,ans,res,candidates,target);
    }
        
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
     sort(candidates.begin(),candidates.end());
        int index =0;
        find(index,ans,res,candidates,target);
        return ans;
        
    }
};