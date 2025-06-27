// Problem: 1. Two Sum
// Link: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Tags: Hash Map, Array
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mpp.count(complement)) {
                return {mpp[complement], i};
            }
            mpp[nums[i]] = i;
        }
        return {}; // Not found
    }
};
