/*
prob title:Kadane’s Algorithm .
prob link: https://leetcode.com/problems/maximum-subarray/
video link : https://www.youtube.com/watch?v=w_KEocd__20
algo used Kadane’s Algorithm
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsofar=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            maxsofar = max(sum,maxsofar);
            sum = max(0,sum);
        }
        return maxsofar;
        
    }
};
