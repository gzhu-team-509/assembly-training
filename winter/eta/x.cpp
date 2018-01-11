#include <iostream>
using namespace std;

int main()
{
    long long n; cin >> n;

    long long ans = 0, base = 1, i = 1;
    while (base * 10 <= n)
        ans += i * (base * 9), ++i, base *= 10;
    ans += i * (n - base + 1);
    cout << ans << endl;
}

// 另一种统计的思路
// https://vjudge.net/solution/5052259
