class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int count=0;
        int maxi =0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto x:st){
            // at first cheak that current x is minimun element
            if(st.find(x-1)==st.end()){
                count++;
                x = x+1;
                while(st.find(x)!=st.end()){
                    count++;
                    x = x+1;
                }
                maxi=max(maxi,count);
                count=0;
            }
        }
        return maxi;
    }
};