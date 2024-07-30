class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int c0 =0;
        vector<int>ans;
        int k=0;;
        for(int i=1;i<n;i++){
            if(nums[k]!=nums[i]){
                k++;
            }
            else{
                nums[k]=nums[i]*2;
                nums[i]=0;
                k++;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                ans.push_back(nums[j]);
            }
            else{
                c0++;
            }
        }
        while(c0!=0){
            ans.push_back(0);
            c0--;
        }
        return ans;
        
    }
};