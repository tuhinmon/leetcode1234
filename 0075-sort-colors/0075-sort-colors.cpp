class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
             }
            else if(nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(c0>0){
                nums[i]=0;
                c0--;
            }
            else if (c1>0){
                nums[i]=1;
                c1--;
            }
            else{
                nums[i]=2;
                c2--;
            }
            
        }
        
    }
};