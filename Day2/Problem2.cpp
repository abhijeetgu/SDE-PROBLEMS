/*
prob title: Pascal Triangle.
prob link: https://leetcode.com/problems/pascals-triangle/

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> v;
        for(int i=1;i<=numRows;i++)
        {
            int c=1;
            for(int j=1;j<=i;j++)
            {
                v.push_back(c);
                c = c * (i-j)/j;
            }
            res.push_back(v);
            v.clear();
        }
        return res;
        
        
    }
};

2.Pascal's Triangle II
https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,1);
        for(int i=1;i<rowIndex;++i){
            for(int j=i;j>0;j--){
                res[j] += res[j-1];
            }
        }
        return res;
        
    }
};
