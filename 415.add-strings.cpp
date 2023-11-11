/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int m = num1.size();
        int n = num2.size();
        string sum;
        int carry = 0;

        for (int i = m - 1, j = n - 1; i >= 0 || j >= 0 || carry > 0; i--, j--, carry /= 10)
        {
            if (i >= 0)
            {
                carry += num1[i] - '0';
            }
            if (j >= 0)
            {
                carry += num2[j] - '0';
            }
            sum += to_string(carry % 10);
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
// @lc code=end
