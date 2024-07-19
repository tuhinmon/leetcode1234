class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int  m = matrix[0].size();
        vector<int>row;
        vector<int>col;
        // matrix tarversal 
        //T.C = 0(N*M) or 0(N^2);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
           }
        }
        // entire row should be zero 
        //T.C =0(n*m);
        for(int i=0;i<row.size();i++){
            int index = row[i];
            for(int j=0;j<m;j++){
                matrix[index][j] =0;
            }
        }
        //entire col zero 
        // T.C=0(n*m);
        for(int j = 0 ;j<col.size();j++){
            int index = col[j];
            for(int i=0;i<n;i++){
                matrix[i][index]=0;
           }
        }
        
    }
};