/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = INT_MAX;
        int curProfit = 0;
        int bestProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            curProfit = prices[i] - min;
            if (curProfit > bestProfit)
            {
                bestProfit = curProfit;
            }
                }
        return bestProfit;
    }
};
// @lc code=end
