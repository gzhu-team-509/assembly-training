#include <iostream>
#include <vector>
#include <map>
using namespace std;
using LL = long long;

// 利用数列整体与部分关系 - MoogleAndChocobo
// https://vjudge.net/solution/12181314

// 利用前缀和 - LeaderBoard
// https://vjudge.net/solution/9491180

LL sum[500500];

int main()
{
    int n; cin >> n;

    sum[0] = 0;
    for (int i = 1; i <= n; ++i)
        cin >> sum[i], sum[i] += sum[i - 1];

    LL ans = 0, cnt = 0;
    for (int i = 2; i <= n - 1; ++i)
    {
        if (3 * sum[i - 1] == sum[n])
            ++cnt;
        if (3 * sum[i] == 2 * sum[n])
            ans += cnt;
    }
    cout << ans << endl;
}
