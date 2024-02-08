/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> final;
        queue<int> q;
        int left, before;

        for (int i = 1; i < 10; i++)
        {
            q.push(i);
        }

        while (!q.empty())
        {
            left = q.front();
            q.pop();

            if (left > high)
            {
                continue;
            }
            if (left >= low && left <= high)
            {
                final.push_back(left);
            }
            before = left % 10;

            if (before < 9)
            {
                q.push(left * 10 + (before + 1));
            }
        }
        return final;
    }
};
// @lc code=end
