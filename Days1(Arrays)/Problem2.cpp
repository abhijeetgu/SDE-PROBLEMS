/*
prob title: Sort an array of 0’s 1’s 2’s without using extra space or sorting algo.
prob link: https://leetcode.com/problems/sort-colors/
video link : https://www.youtube.com/watch?v=oaVa-9wmpns 
algo used Dutch National Flag .
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo =0,mid=0,hi = nums.size()-1;
        while(mid <= hi)
        {
            if(nums[mid]==2)
            {
                swap(nums[mid],nums[hi--]);
                
                
            }
            else if(nums[mid]==0)
            {
                swap(nums[mid++],nums[lo++]);
                
                    
            }
            else
            {
                mid++;
            }
            
        }
        
    }
};
