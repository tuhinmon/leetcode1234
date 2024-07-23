class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long m = n;
        // n is the negative number 
        if(m<0){
            m = (-1)*m;
        }
        while(m!=0){
            if(m%2==0){
                m = m/2;
                x = x*x;
            }
            else{
                ans = ans*x;
                m = m-1;
            }
      }
        if(n<0){
            ans = 1/ans;
            return ans;
       }
        else{
            return ans;
        }
        
    }
};