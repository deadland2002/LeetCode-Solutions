class Solution
{
public:
    int fact(int n)
    {
        int temp = 0, i;
        if (n != 0)
        {
            for (i = 1; i < n; i++)
                temp += i;
        }
        cout << "\n"
             << n << " " << temp << " ";
        return temp;
    }
    int numPairsDivisibleBy60(vector<int> &time)
    {
        int n, i, ans = 0, f = 0;
        n = time.size();
        map<int, int> m;

        for (i = 0; i < n; i++)
        {
            m[time[i] % 60]++;
        }

        for (i = 0; i < 30; i++)
        {
            if (m[i] >= 1 && i != 30 && i != 0)
            {
                f += m[i] * m[60 - i];
            }
        }
        f += fact(m[0]);
        f += fact(m[30]);

        return f;
    }
};