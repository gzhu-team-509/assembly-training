#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int lantern[1010];

int main()
{
    int n, l; cin >> n >> l;

    lantern[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> lantern[i];
    }
    lantern[n + 1] = l;

    sort(lantern, lantern + n + 2);

    double dis = 0; long long prev = 0, cur;
    for (int i = 1; i < n + 2; ++i)
    {
        if (i == 1 || i == n + 1) dis = max(dis, (double)lantern[i] - lantern[i - 1]);
        else dis = max(dis, ((double)lantern[i] - lantern[i - 1]) / 2);
    }

    cout.flags(cout.fixed);
    cout.precision(10);
    cout << dis << endl;
}
