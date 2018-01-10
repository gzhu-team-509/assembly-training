#include <iostream>
#include <map>
using namespace std;
using ll = long long;

// Tutorial：
// http://codeforces.com/blog/entry/14136
// 计算每只Worms的序号，或维护前缀和进行二分搜索

map<ll, ll> ans;

int main()
{
    int n; cin >> n;

    for (ll c = 1, prev = 0; c <= n; ++c)
    {
        ll cur; cin >> cur;
        for (ll i = 1; i <= cur; ++i)
            ans.insert(make_pair(prev + i, c));
        prev += cur;
    }

    int q; cin >> q;
    while (q--)
    {
        ll qry; cin >> qry;
        cout << ans[qry] << endl;
    }
}
