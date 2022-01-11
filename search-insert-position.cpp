/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/

/*
Runtime: 8 ms, faster than 25.72% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 22.39% of C++ online submissions for Search Insert Position.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for( int n : nums)
        {
            if ( n >= target)
            {
                return i;
            }
            i++;
        }
        return i;
    }
};