#include <iostream>
using namespace std;
using LL = long long;

LL highest_digit(LL n)
{
    LL rslt = 1;
    while (n >>= 1) ++rslt;
    return rslt;
}

int main()
{
    int t; cin >> t;

    while (t--)
    {
        LL n; cin >> n;

        LL sum1 = (1 + n) * n / 2; // 等差数列 1, 2, 3, ... , n
        LL sum2 = (1LL << highest_digit(n)) - 1; // 等比数列 1, 2, 4, ...
        cout << sum1 - 2 * sum2 << endl;
    }
}
