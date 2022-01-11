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
Runtime: 4 ms, faster than 87.85% of C online submissions for Search Insert Position.
Memory Usage: 6.2 MB, less than 40.30% of C online submissions for Search Insert Position.
*/

int searchInsert(int* nums, int numsSize, int target){
    for( int i = 0 ; i < numsSize ; i++ )
    {
        if( nums[i] >= target) 
        {
            return i;
        }
    }
    return numsSize;
}