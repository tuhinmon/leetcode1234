class Solution {
public:
    int findpalindrome(string&s,int l, int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int maxlen =0;
        int si =0;
        int i=0;
       while(i<s.size()){
           int len1 = findpalindrome(s,i,i);
           int len2 = findpalindrome(s,i,i+1);
           int len = max(len1,len2);
           if(len>maxlen){
               maxlen = len;
               si = i-(len-1)/2;
            }
           i++;
       }
        return s.substr(si,maxlen);
        
        
    }
};