/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int size = digits.size();
        vector<int> ans = {};
        for (int i = 0; i < size; i++)
        {

            if (i == size - 1 and size > 1)
            {
                ans.push_back(digits[i] + 1);
            }
            else
            {
                ans.push_back(digits[i]);
            }
        }

        return ans;
    }
};
// @lc code=end
