#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

// Tutorial (Huffman Coding)
// http://codeforces.com/blog/entry/13568

// 考虑两种极端情形：等分成两组 / 一个元素为一组，其余元素为一组
// 两者的score比较约为 log2(N) * N <= (N/2) * N

LL num[300500];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> num[i];
    sort(num, num + n);

    LL ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i + 1 != n)
            ans += num[i] * (i + 2);
        else
            ans += num[i] * (i + 1);
    }
    cout << ans << endl;
}
