/*
prob title: Set Matrix Zeros .
prob link: https://leetcode.com/problems/set-matrix-zeroes/
used 0th row and column as dummy array 
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int r = matrix.size();
        int c = matrix[0].size();
        int col0 = 1;
        for(int i=0;i<r;i++){
            if(matrix[i][0]==0) col0 = 0;
            for(int j=1;j<c;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=1;j--){
                if(matrix[i][0] ==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(col0==0) matrix[i][0]=0;
        }
            
       
        
    }
};
