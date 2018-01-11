#include <iostream>
using namespace std;

int father[2020];

int main()
{
    int n; cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int t; cin >> t;
        father[i] = t;
    }

    int mn = 1;
    for (int i = 1; i <= n; ++i)
    {
        int cnt = 1, cur = i;
        while ((cur = father[cur]) != -1) ++cnt;
        mn = max(cnt, mn);
    }

    cout << mn << endl;
}
