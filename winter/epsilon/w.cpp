#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n, m; cin >> n >> m;

    auto pair = [](ll n) {
        return n * (n - 1) / 2;
    };

    ll mx = pair(n - m + 1);
    ll mn = (n % m) * pair(n / m + 1) + (m - n % m) * pair(n / m);
    cout << mn << ' ' << mx;
}
