class Solution {
public:
    int cur =0;
    string ans ="";
    void cheak(int s,string res,int k){
        // base case 
        if(ans!=""){
            return;
      }
    if(s==res.size()){
        cur++;
        if(cur==k){
            ans = res;
            return;
        }
      }
    for(int i=s;i<res.size();i++){
        swap(res[i],res[s]);
        sort(res.begin()+s+1,res.end());
        cheak(s+1,res,k);
        swap(res[i],res[s]);
}
    }
    string getPermutation(int n, int k) {
        string res ="";
        for(int i=1;i<=n;i++){
            res = res+to_string(i);
      }
        cheak(0,res,k);
        return ans;
        
    }
};