class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        // point i
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            // point j
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int left = j+1;
                int right = nums.size()-1;
                 while(left<right){
                     long long sum = nums[i];
                     sum = sum+nums[j];
                     sum = sum+nums[left];
                     sum = sum+nums[right];
                     if(sum == target){
                         vector<int>res ={nums[i],nums[j],nums[left],nums[right]};
                         ans.push_back(res);
                         left++;
                         right--;
                         while(left<right && nums[left]==nums[left-1]){
                             left++;
                         }
                         while(left<right && nums[right]==nums[right+1]){
                             right--;
                         }
                     }
                     else if(target>sum){
                         left++;
                      }
                     else{
                         right--;
                     }
                 }   
            }
        }
        return ans;
        
    }
};