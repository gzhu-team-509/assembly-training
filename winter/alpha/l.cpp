#include <iostream>
using namespace std;

int cnt[5];

int main()
{
    int n; cin >> n;
    while (n--)
    {
        int t; cin >> t;
        ++cnt[t];
    }

    int tot = 0;
    tot += cnt[4];
    tot += cnt[3], cnt[1] -= min(cnt[3], cnt[1]);
//! tot += cnt[2] / 2, tot += cnt[2] % 2, cnt[1] -= min(2, cnt[1]);
    tot += cnt[2] / 2, tot += cnt[2] % 2, cnt[1] -= min((cnt[2] % 2) * 2, cnt[1]);
    tot += cnt[1] / 4, tot += (cnt[1] % 4 ? 1 : 0);
    cout << tot << endl;
}
