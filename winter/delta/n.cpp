#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
int mn(T a, T b)
{
    return min(a, b);
}

template <typename T, typename... Ts>
int mn(T a, Ts... b)
{
    T c = mn(b...);
    return min(a, c);
}

int main()
{
    vector<int> gp[4];

    int n; cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int t; cin >> t;
        gp[t].push_back(i);
    }

    int cnt = mn(gp[1].size(), gp[2].size(), gp[3].size());

    cout << cnt << endl;
    while (cnt--)
    {
        int i = gp[1].back(), j = gp[2].back(), k = gp[3].back();
        gp[1].pop_back(), gp[2].pop_back(), gp[3].pop_back();

        cout << i << ' ' << j << ' ' << k << endl;
    }
}
