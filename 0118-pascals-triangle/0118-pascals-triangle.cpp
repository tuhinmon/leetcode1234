class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //T.C = 0(N);
        // S.C =0(N);
        vector<vector<int>>res(numRows);
        for(int i=0;i<numRows;i++){
            res[i].resize(i+1);
            // at frist zero add in start and ending position;
            res[i][0] = res[i][i] =1;
            // sum performance 
            for(int j=1;j<i;j++){
             res[i][j] = res[i-1][j-1] + res[i-1][j];
         }
            
    }
        return res;
        
        
    }
};