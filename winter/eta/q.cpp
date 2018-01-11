#include <iostream>
#include <algorithm>
using namespace std;

int cnt[10010];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int t; cin >> t;
        ++cnt[t];
    }

    int tot = 0;
    for (int i = 1; i <= 3 * n; ++i)
    {
        if (cnt[i])
            tot += cnt[i] - 1, cnt[i + 1] += cnt[i] - 1;
    }

    cout << tot << endl;
}
