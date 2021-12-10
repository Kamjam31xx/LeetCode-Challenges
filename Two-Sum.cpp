/*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    
    You can return the answer in any order.
    
    
    
    Example 1:
    
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Output: Because nums[0] + nums[1] == 9, we return [0, 1].
    Example 2:
    
    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    Example 3:
    
    Input: nums = [3,3], target = 6
    Output: [0,1]
    
    
    Constraints:
    
    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.
*/

/*
Runtime: 148 ms, faster than 36.28% of C++ online submissions for Two Sum.
Memory Usage: 10.1 MB, less than 84.27% of C++ online submissions for Two Sum.
*/

// This passes leetcode testing but adds and compares numbers after removing their sign
// so i opened an issue and am waiting for them to tell me im stupid or add a test case 

#include <cstdint>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        uint_fast32_t max_i = uint_fast32_t(nums.size()) - 1;
        uint_fast32_t max_j = max_i + 1;
        std::vector<int> answer;
        
        for (uint_fast32_t i = 0 ; i < max_i ; i++) {
            uint_fast32_t nums_i = uint_fast32_t(nums[i]);
            for (uint_fast32_t j = i + 1 ; j < max_j ; j++) {
                if(nums_i + uint_fast32_t(nums[j]) == uint_fast32_t(target)){
                    answer.push_back(int(i));
                    answer.push_back(int(j));
                    return answer;
                }
            }
        }
        return answer;
    }
};