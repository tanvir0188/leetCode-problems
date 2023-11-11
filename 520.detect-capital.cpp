/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int length = word.size();

        int count = 1;

        if (!isupper(word[0]))
        {
            for (int i = 1; i < length; i++)
            {
                if (isupper(word[i]))
                {
                    return false;
                }
            }
        }

        else if (isupper(word[0]))
        {
            for (int i = 1; i < length; i++)
            {
                if (isupper(word[i]))
                {
                    count++;
                }
            }
        }

        if (count == length)
        {
            return true;
        }
        else
        {
            for (int i = 1; i < length; i++)
            {
                if (isupper(word[i]))
                {
                    return false;
                }
            }
        }

        return true;
    }
};
// @lc code=end
