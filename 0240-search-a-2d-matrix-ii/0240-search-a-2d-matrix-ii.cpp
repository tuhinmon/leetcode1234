class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowindex = 0;
        int colindex = col-1;
        while(row>rowindex && colindex>=0){
            int element = matrix[rowindex][colindex];
            if(element==target){
                return true;
            }
            else if(target>element){
                rowindex++;
            }
            else{
                colindex--;
            }

        }
        return false;
        
    }
};