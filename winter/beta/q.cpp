#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n, k; cin >> n >> k;

    ll cnt = (k - 1)/ n;
    k -= cnt * n;

    ll ans;
    if (k <= (n + 1) / 2) ans = 2 * k - 1;
    else ans = 2 * (k - (n + 1) / 2);

    cout << cnt + ans << endl;
}
