class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int deg =3;
        if(mat == target){
            return true;
       }
        while(deg--){
        int n = mat.size();
        int m = mat[0].size();
        // at frist the transpose the matrix
        // T.C =0(N^2);
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        // each row should be reverse 
        // T.C = 0(N^2);
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
        
           if(mat==target){
               return true;
           } 
        }
        return false;
    }
};