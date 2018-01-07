#include <iostream>
using namespace std;
using ll = long long;

const int MAXN = 36;

ll dp[MAXN][MAXN];

void init()
{
    dp[0][0] = 1;
    for (int i = 0; i < MAXN; ++i)
    {
        for (int j = i; j < MAXN; ++j)
            dp[i][j] += (j ? dp[i][j - 1] : 0) + (i ? dp[i - 1][j] : 0);
    }
}

int main()
{
    init();

    int kase = 0;
    int n; while (cin >> n && n != -1)
    {
        cout << ++kase << ' ' << n << ' ' << 2 * dp[n][n] << endl;
    }
}
