#include <iostream>
#include <map>
using namespace std;
using ll = long long;

map<ll, ll> flowers;

int main()
{
    int n; cin >> n;

    ll mn = 1e10, mx = -1;
    while (n--)
    {
        ll cur; cin >> cur;
        ++flowers[cur];
        mx = max(cur, mx);
        mn = min(cur, mn);
    }

    cout << mx - mn << ' ';

    ll cntm = flowers[mx];
    ll cntn = flowers[mn];

    // 注意当mn == mx时，使用C(cnt[m], 2)而不是A(cnt[m], 2)
    if (mx != mn)
        cout << cntm * cntn << endl;
    else
        cout << cntm * (cntm - 1) / 2 << endl;
}
