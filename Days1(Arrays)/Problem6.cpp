/*
prob title: Merge Overlapping Subintervals.
prob link: https://leetcode.com/problems/merge-intervals/
video link : https://www.youtube.com/watch?v=2JzRBPFYbKE&t=50s

*/
class Solution {
    /*static bool comp(vector<int> &a,vector<int> &b)
    {
        return a[0] < b[0];
    }*/
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){return a[0] < b[0];});
        vector<vector<int>> res;
        if(intervals.empty())
        {
            return res;
        }
        int x = intervals[0][0];
        int y = intervals[0][1];
        for(int i=0;i<n;i++)
        {
            
            if(x <= intervals[i][0] && intervals[i][0] <=y )
            {
                x = x;
                y = max(y,intervals[i][1]);

            }
            else
            {
                res.push_back({x,y});
                x=intervals[i][0];
                y=intervals[i][1];
            }
            
        }
        res.push_back({x,y});
        return res;
        
    }
};
