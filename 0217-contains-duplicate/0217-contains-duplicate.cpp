class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
        
        
        
       unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
     }
        for(auto it:mpp){
            if(it.second>1){
                return true;
    }

        }
        return false;
    }
};