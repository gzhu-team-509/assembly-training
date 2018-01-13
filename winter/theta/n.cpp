#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, v; cin >> n >> v;

    int tot = 0; string ans;
    for (int i = 1; i <= n; ++i)
    {
        int k; cin >> k;

        int mn; cin >> mn;
        while (--k) {
            int t; cin >> t;
            mn = min(mn, t);
        }

        if (v > mn) {
            ++tot, ans += to_string(i), ans += ' ';
        }
    }

    cout << tot << endl;
    if (tot) cout << ans << endl;
}
