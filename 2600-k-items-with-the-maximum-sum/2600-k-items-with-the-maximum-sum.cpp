class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum =0;
        while(k--){
            if(numOnes>0){
                sum =sum+1;
                numOnes--;
            }
            
            else if(numZeros>0){
                sum = sum+0;
                numZeros--;
            }
            else{
                sum = sum+(-1);
                numNegOnes--;
            }
        }
        return sum;
        
    }
};