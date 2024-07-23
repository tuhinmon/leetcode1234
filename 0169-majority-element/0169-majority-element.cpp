class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2+1];
        int ans = 0;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second>nums.size()/2){
                ans = x.first;
                break;
            }
        }
        return ans;
        
        
    }
};