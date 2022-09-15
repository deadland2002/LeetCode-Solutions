class Solution
{
public:
    int mySqrt(int x)
    {
        long unsigned int val;
        if (x <= 0)
            return 0;
        if (x >= 1 && x <= 3)
            return 1;

        for (unsigned long int i = 2; i <= x / 2; i++)
        {
            if (i * i <= x)
                val = i;
            else
                break;
        }
        return val;
    }
};