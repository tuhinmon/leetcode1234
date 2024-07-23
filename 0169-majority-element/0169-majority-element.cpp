class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2+1];
        
        // T.C =0(N);
        // S.C =0(N);
//         int ans = 0;
//         unordered_map<int,int>mpp;
//         for(int i=0;i<nums.size();i++){
//             mpp[nums[i]]++;
//         }
//         for(auto x:mpp){
//             if(x.second>nums.size()/2){
//                 ans = x.first;
//                 break;
//             }
//         }
//         return ans;
        int ans = 0;
        int ele =0;
        for(int i=0;i<nums.size();i++){
            if(ans==0){
                ele = nums[i];
                ans++;
            } 
            else if(ele==nums[i]){
                ans++;
                
            }
            else {
                ans--;
            }
        }
        return ele;
        
        
    }
};