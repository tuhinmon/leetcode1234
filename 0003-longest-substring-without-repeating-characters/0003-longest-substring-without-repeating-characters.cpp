class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // approach ----->>>>>>1
        // S.C =0(1);
        // T.C = 0(n);

        // int maxi =0;
        // int j=0;
        // vector<int>arr(128,-1);
        // for(int i=0;i<s.length();i++){
        //     if(arr[s[i]] >=j){
        //         j = arr[s[i]]+1;

        //     }
        //     arr[s[i]] =i;
        //     maxi = max(maxi , i-j+1);

        // }
        // return maxi;




        // approach ->>>>>>>>>2
        // t.c =0(n);
        // s.c =0(n);
        int maxi =0;
        int count =0;
        int j =0;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            count++;
            while(mpp[s[i]]>1){
                mpp[s[j]]--;
                count--;
                j++;
            }
            maxi = max(maxi,count);
        }
        return maxi;
       
    }
};