class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans ="";
        int i=0;
        int j=0;
        string n = strs[0];
        string m = strs[strs.size()-1];
        while(i<n.size() && j<m.size()){
            if(n[i]==m[j]){
                ans = ans+n[i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return ans;
        
        
    }
};