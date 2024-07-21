class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>res=intervals[0]; 
        for(auto x : intervals){
           // cheak interval for using if condition 
            if(x[0]<=res[1]){
                // if present the interval then marge them
                res[1] = max(res[1],x[1]);
            }
            else{
                ans.push_back(res);
                res = x;
           }
            
        }
        ans.push_back(res);
        return ans;
        
    }
};