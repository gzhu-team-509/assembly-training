#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll a, b; cin >> a >> b;

    ll ans = 0, mod;
    while (a % b)
    {
        ans += a / b;
        mod = a % b, a = b, b = mod;
    }
    ans += a / b;

    cout << ans << endl;
}
