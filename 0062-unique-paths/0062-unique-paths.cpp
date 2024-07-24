class Solution {
public:
// int countpath(int i,int j,int m,int n){
//     // t.c = exponecial;
//     if(i==m-1 && j==n-1){
//         return 1;
//     }
//     if(i>=m || j>=n){
//         return 0;
//     }
//     else{
//         return countpath(i+1,j,m,n)+countpath(i,j+1,m,n);
//     }
// }
int uniquePaths(int m, int n) {



    // int i=0;
    // int j =0;
    // return countpath(i,j,m,n);



        //approach ->>>>>>2
        //t.c = 0(m-1);/ or 0(n-1);
        //s.c = 0(1);
        int N = (m+n)-2;
        int r = (m-1);
        long res = 1;
        for(int i=1;i<=r;i++){
            res = res*(N-r+i)/i;
        }
        return res;

    }
};