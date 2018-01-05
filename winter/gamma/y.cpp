#include <iostream>
using namespace std;

const int INF = 1e9;

int dp[100000];

int main()
{
    int n, s[3]; cin >> n >> s[0] >> s[1] >> s[2];

    for (int i = 0; i <= n; ++i) dp[i] = INF;

    for (int i = 0; i < 3; ++i)
    {
        if (dp[s[i]] == INF) dp[s[i]] = 1;
        for (int j = 0; j <= n; ++j)
        {
            if (dp[j] != INF)
            {
                if (dp[j + s[i]] == INF) dp[j + s[i]] = dp[j] + 1;
                else dp[j + s[i]] = max(dp[j + s[i]], dp[j] + 1);
            }
        }
    }

    cout << dp[n] << endl;
}
