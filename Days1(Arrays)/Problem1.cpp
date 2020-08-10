/*
prob title: Find the duplicate in an array of N+1 integers.
prob link: https://leetcode.com/problems/find-the-duplicate-number/

algo used Floyd's Tortoise and Hare. idea taken from linked list slow and fast pointers
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0];
        int fast = nums[0];
        while(1)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow==fast) break;
            
        }
        fast = nums[0];
        while(slow != fast )
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return fast;
        
    }
};


