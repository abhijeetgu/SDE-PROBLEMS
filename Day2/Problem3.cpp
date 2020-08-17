/*
prob title: Next Permutation.
prob link: https://leetcode.com/problems/next-permutation/

1) transverse from end and find first decreasing number "d";
2)after that find a number just greater number than "d" from right side.
3)then swap the d and just decresing number(a).
4)after swaping reverse the next number from a till end;
*/


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1;
        int n=nums.size()-1;
        
        while(i>0 && nums[i-1]>=nums[i])
        {
            i--;
        }
        
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int k = i-1;
            while(i<n && nums[i+1]>nums[k])
            {
                i++;
            }
            swap(nums[i],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};
