class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size();
        int m = matrix[0].size();
        int i =0;
        int j = (n*m)-1;
        while(i<=j){
            int mid = (i+j)/2;
            int ele = matrix[mid/m][mid%m];
            if(target==ele){
                return true;
            }
            else if(target>ele){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return false;
        
    }
};