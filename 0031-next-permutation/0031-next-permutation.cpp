class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j;
        // i point 
        for( i=nums.size()-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                break;
           }
        }
        // edge case [3 2 1] 
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
        // j point 
        for( j=nums.size()-1;j>=0;j--){
            if(nums[j]>nums[i]){
                break;
            }
        }
            // use swap function 
        swap(nums[i],nums[j]);
        // use reverse function
        //T.C =0(N);
        reverse(nums.begin()+i+1,nums.end());
     }
        
   }
};