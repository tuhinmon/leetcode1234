class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // T.c = 0(N^2);
       //  int sum =0;
       //  int maxi = INT_MIN;
       //  for(int i=0;i<nums.size();i++){
       //      for(int j=i;j<nums.size();j++){
       //          sum = sum+nums[j];
       //          maxi = max(maxi,sum);
       //     }
       //      sum=0;
       // }
       //  return maxi;
        
        
        
        
        // use khadens algorithm 
        int sum =0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi ;
    }
};