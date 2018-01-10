#include <iostream>
using namespace std;

const int mod = 10;

int fpow(int a, int b)
{
    int ans = 1, base = a;
    while (b)
    {
        if (b & 1) ans *= base, ans %= mod;
        base *= base, base %= mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n; cin >> n;
    cout << fpow(1378, n) << endl;
}
