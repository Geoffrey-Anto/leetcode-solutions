class Solution {
public:
    int f(string &s, string &t, int n, int m)
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int res = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    if (dp[i][j] > res)
                        res = dp[i][j];
                }
                else
                    dp[i][j] = 0;
            }
        }
        return res;
    }
    bool isSubstringPresent(string s) {
        string t = s;
        reverse(begin(s), end(s));
        return f(s, t, s.size(), t.size()) > 1;
    }
};
