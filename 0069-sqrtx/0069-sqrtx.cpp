class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        // long m = x;
        int s=0;
        long e = x;
        while(s<=e){
            long mid = s+(e-s)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                e = mid-1;
            }
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
        
        
    }
};