class Solution
{
public:
    string largestGoodInteger(string num)
    {
        int i;
        string sum = "", max = "", ans;
        for (i = 0; i < num.length() - 2; i++)
        {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
            {
                sum = num[i];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
        ans = max + max + max;
        return ans;
    }
};