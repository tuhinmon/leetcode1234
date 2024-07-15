class Solution {
public:
    bool isPalindrome(string &s,int st,int e){
        while(st<=e){
            if(s[st]!=s[e]){
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    void part(int index,vector<vector<string>>&ans,vector<string>&res,string s){
        if(index==s.size()){
            ans.push_back(res);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                res.push_back(s.substr(index,i-index+1));
                part(i+1,ans,res,s);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
    vector<vector<string>>ans;
    vector<string>res;
    int index =0;
    part(0,ans,res,s);
    return ans;
        
    }
};