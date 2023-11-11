/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
    // brute Force approach
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int num : nums)
        {
            m[num]++;
            if (m[num] > nums.size() / 2)
            {
                return num;
            }
        }
        return -1;
    }
};
// @lc code=end
