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
Runtime: 80 ms, faster than 42.01% of JavaScript online submissions for Search Insert Position.
Memory Usage: 40 MB, less than 31.86% of JavaScript online submissions for Search Insert Position.
*/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var searchInsert = function(nums, target) {
    let i = 0;
    while(i != nums.length)
    {
        if(nums[i] >= target)
        {
                return i;
        }
        i += 1;
    }
    return nums.length;
};