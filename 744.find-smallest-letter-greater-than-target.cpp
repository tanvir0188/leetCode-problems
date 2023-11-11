/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int start = 0;
        int end = letters.size() - 1;
        char result = letters[0];
        int mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (target == letters[mid])
            {
                start = mid + 1;
            }
            else if (letters[mid] > target)
            {
                result = letters[mid];
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return result;
    }
};
// @lc code=end
