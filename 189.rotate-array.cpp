/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void print(vector<int> a)
    {
        cout << '[';
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
            if (i < n - 1)
            {
                cout << ',';
            }
        }
        cout << ']';
    }
    void rotate(vector<int> &nums, int k)
    {
        vector<int> nums1;

        int n = nums.size();
        int m = n - k - 1;

        for (int i = m + 1; i < n; i++)
        {
            nums1.push_back(nums[i]);
        }

        for (int i = 0; i < m + 1; i++)
        {
            nums1.push_back(nums[i]);
        }

        nums = nums1;

        print(nums);
    }
};
// @lc code=end
