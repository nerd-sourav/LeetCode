/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else
        {
            long y = x;
            int q = 0;
            int r = 0;
            int s = 0;
            while (y != 0)
            {
                q = y / 10;
                r = y % 10;
                s = s * 10 + r;
                y = q;
            }
            return s == x;
        }
    }
};
// @lc code=end
