'''
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
'''

'''
Runtime: 48 ms, faster than 79.07% of Python3 online submissions for Search Insert Position.
Memory Usage: 15 MB, less than 81.89% of Python3 online submissions for Search Insert Position.
'''

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        i = 0
        for n in nums :
            if n == target :
                return i
            elif n > target :
                return i
            i += 1
        return len(nums) 